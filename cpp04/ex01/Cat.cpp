/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:08:48 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/16 14:49:29 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &toCpy)
{
	*this = toCpy;
	_brain = new Brain(*(toCpy.getBrain()));
	_type = "Cat";
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "grrrrrr" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (_brain);
}

Cat&	Cat::operator=(const Cat& toCpy)
{
	int	i(0);

	while (i < 100)
	{
		_brain->getIdeas()[i] = toCpy._brain->getIdeas()[i];
		i++;
	}
	return (*this);
}