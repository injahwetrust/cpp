/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:32:20 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 14:11:32 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : _name(name)
{
	std::cout << "constructor called on " << _name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "destructor called on " << _name << std::endl;
}

void	HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	_type = &type;
}