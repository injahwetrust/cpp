/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:59:13 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 18:09:04 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

Ice::Ice(const Ice& toCpy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = toCpy;
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}