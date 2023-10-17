/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:50:59 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 14:10:18 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : _name(name), _w(w)
{
	//_w = w // erreur car doit etre initialise apres les argument, et en premier (derniere attribution se fait en premiere)
	std::cout << &w << std::endl;
	std::cout << &_w << std::endl;
	std::cout << "constructor called on " << _name << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "destructor called on " << _name << std::endl;
}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _w.getType() << std::endl;
}