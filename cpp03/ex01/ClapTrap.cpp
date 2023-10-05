/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:25:45 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/05 16:51:38 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	_hp = 10;
	_ep = 10;
	_ad = 10;
	_class = "ClapTrap";
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "ClapTrap Name Edit constructor called" << std::endl;
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 10;
	_class = "ClapTrap";
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator =(const ClapTrap &src)
{
	std::cout << _class << " overrided Operator = used" << std::endl;
	if (this != &src)
	{
		_name = src.getName();
		_hp = src.getHp();
		_ep = src.getEp();
		_ad = src.getAd();
	}
	return (*this);
}

void	ClapTrap::displayStats()
{
	std::cout << "name: " << _name << std::endl;
	std::cout << "class: " << _class << std::endl;
	std::cout << "hp: " << _hp << std::endl;
	std::cout << "ep: " << _ep << std::endl;
	std::cout << "ad: " << _ad << std::endl;
}


void	ClapTrap::attack(const std::string &target)
{
	if (_hp > 0 && _ep > 0)
	{
		std::cout << _class << " " << _name << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
		_ep--;
	}
	else if (_ep == 0)
		std::cout << "Can't attack while out of Energy" << std::endl;
	else
		std::cout << "Can't attack while dead" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout << _class << " " << _name << " received " << amount << " of damage!" << std::endl;
		_hp -= amount;
		if (_hp < 0)
			_hp = 0;
	}
	std::cout << _class << " " << _name << " takes damages but is already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp > 0 && _ep > 0)
	{
		std::cout << _class << " " << _name << " healed " << amount << "!" << std::endl;
		_ep--;
	}
	else if (_ep == 0)
		std::cout << _class << " " << _name << " can't heal" << amount << "!" << std::endl;
	else
		std::cout << _class << " " << _name << " tried to heal but is already dead" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (_name);
}

int	ClapTrap::getHp() const
{
	return (_hp);
}

int	ClapTrap::getEp() const
{
	return (_ep);
}

int	ClapTrap::getAd() const
{
	return (_ad);
}
