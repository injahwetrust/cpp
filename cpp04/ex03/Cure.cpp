/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:35:33 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 17:44:32 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	_type = "Cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure::Cure(const Cure& toCpy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = toCpy;
}


Cure*	Cure::clone() const
{
	Cure *a = new Cure();
	
	return (a);
}

void	Cure::use(ICharacter& target)
{
	std::cout << " heals " << target.getName() << "'s wounds *" << std::endl;
}