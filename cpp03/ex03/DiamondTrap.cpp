/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:56:36 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 17:05:59 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "UNNAMED";
	ClapTrap::_name = _name + "_clap_name";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ad = ScavTrap::_ad;
}
DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ad = ScavTrap::_ad;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	*this = other;
}
DiamondTrap&	DiamondTrap::operator =(DiamondTrap& other)
{
	ClapTrap::operator=(other);
	return (*this);
}

void	DiamondTrap::WhoAmI()
{
	std::cout << "My _name is " << _name << "\nMy ClapTrap _name is " << ClapTrap::_name << std::endl;
}

