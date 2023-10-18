/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:35:33 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/18 19:49:27 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure*	Cure::clone() const
{
	Cure *a = new Cure();
	
	return (a);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}