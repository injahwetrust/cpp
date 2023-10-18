/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:44:25 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/18 20:48:21 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : _name(name)
{
	unsigned int	i;

	i = -1;
	std::cout << "Character default constructor called with name: " << _name << std::endl;
	while (++i < 4)
		_slots[i] = NULL;
	i = -1;
}

Character::Character(const Character& toCpy)
{
	unsigned int	i;

	i = 0;
	std::cout << "Character copy constructor called" << std::endl;
	while (i < 4)
	{
		_slots[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (toCpy._slots[i] != NULL)
			_slots[i] = toCpy._slots[i]->clone();
		i++;
	}
	while (_bag.size())
	{
		delete _bag[0];
		_bag.erase(_bag.begin());
	}
	i = 0;
	while (i < toCpy._bag.size())
	{
		_bag.push_back(toCpy._bag[i]->clone());
		i++;
	}
	_name = toCpy._name;
}

Character::~Character()
{
	unsigned int	i;

	i = 0;
	std::cout << "Character destructor called on: " << _name << std::endl;
	while (i < 4)
	{
		if (_slots[i] != NULL)
			delete _slots[i];
		i++;
	}
	while (_bag.size())
	{
		delete _bag[0];
		_bag.erase(_bag.begin());
	}
}

Character&	Character::operator=(const Character& toCpy)
{
	unsigned int	i;

	i = 0;
	std::cout << "Character operator = called" << std::endl;
	while (i < 4)
	{
		if (_slots[i] != NULL)
		{
			delete _slots[i];
			_slots[i] = NULL;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (toCpy._slots[i] != NULL)
			_slots[i] = toCpy._slots[i]->clone();
		i++;
	}
	while (_bag.size())
	{
		delete _bag[0];
		_bag.erase(_bag.begin());
	}
	i = 0;
	while (i < toCpy._bag.size())
	{
		_bag.push_back(toCpy._bag[i]->clone());
		i++;
	}
	_name = toCpy._name;
	return (*this);
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::showStats()
{
	unsigned int	i;

	i = 0;
	std::cout << "\nName: " << _name << std::endl;
	std::cout << "Equiped:" << std::endl;
	while (i < 4)
	{
		if (_slots[i] != NULL)
			std::cout << "\tslot " << i << ": " << _slots[i]->getType() << std::endl;
		else
			std::cout << "\tslot " << i << ": Empty" << std::endl;
		i++;
	}
	std::cout << "\nInventory:" << std::endl;
	i = 0;
	while (i < _bag.size())
	{
		if (_bag[i] != NULL)
			std::cout << "\tslot " << i << ": " << _bag[i]->getType() << std::endl;
		else
			std::cout << "\tslot " << i << ": Empty" << std::endl;
		i++;
	}
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	if (m == NULL)
		return ;
	while (i < 4)
	{
		if (_slots[i] == NULL)
		{
			_slots[i] = m;
			std::cout << m->getType() << " equiped on slot " << i << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "No more slot to equip " << m->getType() << std::endl;
	_bag.push_back(m);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (_slots[idx] != NULL)
		{
			_bag.push_back(_slots[idx]);
			_slots[idx] = NULL;
		}
	}
	else
		std::cout << _name << " has 4 Materia slots, use 0 to 3 to unequip" << std::endl; 
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _slots[idx] != NULL)
		_slots[idx]->use(target);
	else
		std::cout << "No Materia equiped on slot " << idx << std::endl;
}

