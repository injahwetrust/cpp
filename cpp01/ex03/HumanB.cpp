/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:32:20 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/12 19:39:54 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "constructor called on " << _name << std::endl;
}

HumanB::HumanB()
{
	std::cout << "destructor called on " << _name << std::endl;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _w->getType() << std::endl;
}

void	HumanB::setType(Weapon type)
{
	_type = type;
}