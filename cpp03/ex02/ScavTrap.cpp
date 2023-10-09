/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:33:03 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/05 16:47:07 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_class = "ScavTrap";
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap Name Edit constructor called" << std::endl;
	_name = name;
	_class = "ScavTrap";
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (_hp > 0)
		std::cout << "ScavTrap " << _name << " said Hodor !" << std::endl;
	else
		std::cout << "ScavTrap " << _name << "can't enter Guard mode will dead" << std::endl;
}

