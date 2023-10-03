/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:50:59 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/12 19:28:42 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w)
{
	_name = name;
	_w = &w;
	std::cout << "constructor called on " << _name << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "destructor called on " << _name << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _w->getType() << std::endl;
}