/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:56:28 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 12:38:10 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "constructor called on Weapon " << _type << std::endl;
}

Weapon::Weapon(const std::string type)
{
	setType(type);
	std::cout << "constructor with type called on Weapon" << ", type is " << _type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "destructor called on Weapon " << _type << std::endl;
}

void	Weapon::setType(const std::string type)
{
	std::cout << "setType called on " << _type << ", type is now " << type << std::endl;
	this->_type = type;
}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}