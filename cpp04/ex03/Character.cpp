/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:44:25 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 18:11:04 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : _name(name)
{
	int	i;

	i = -1;
	std::cout << "Character constructor called with name: " << _name << std::endl;
	while (++i < 4)
		_slots[i] = NULL;
}

Character::Character(const Character& toCpy)
{
	int	i;

	i = 0;
	while 
}

Character::~Character()
{
	int	i;

	i = 0;
	std::cout << "Character destructor called on: " << _name << std::endl;
	while (i < 4)
	{
		if (_slots[i] != NULL)
		 delete _slots[i];
		i++;
	}
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_slots[i] == NULL)
		{
			_slots[i] = m->clone();
			std::cout << m->getType() << " equiped on slot " << i << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "No more slot to equip " << m->getType() << std::endl;
}

void	Character::unequip(int idx)
{
	if (_slots[idx] != NULL)
		delete _slots[idx];
	_slots[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _slots[idx] != NULL)
		_slots[idx]->use(target);
	else
		std::cout << "No Materia equiped on slot " << idx << std::endl;
}
