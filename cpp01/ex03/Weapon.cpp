/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:56:28 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/08 15:38:48 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "constructor called on Weapon" << std::endl;
}

Weapon::Weapon(std::string name)
{
	std::cout << "constructor with name called on Weapon" << std::endl;
	setType(name);
}

Weapon::~Weapon()
{
	std::cout << "destructor called on Weapon" << std::endl;
}

void	Weapon::setType(std::string name)
{
	this->_name = name;
}

std::string	Weapon::getType(void)
{
	return (this->_name);
}