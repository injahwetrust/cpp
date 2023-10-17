/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:19:44 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/16 14:46:14 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &toCpy)
{
	*this = toCpy;
	_brain = new Brain(*(toCpy.getBrain()));
	_type = "dog";
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "grrrrrr" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (_brain);
}

Dog&	Dog::operator=(const Dog& toCpy)
{
	int	i(0);

	while (i < 100)
	{
		_brain->getIdeas()[i] = toCpy._brain->getIdeas()[i];
		i++;
	}
	return (*this);
}