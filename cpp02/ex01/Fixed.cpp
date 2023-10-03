/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:31 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/29 16:16:13 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fbits = 8;

Fixed::Fixed()
{
	nb = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int &i_param)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i_param << this->fbits);
}

Fixed::Fixed(const float &f_param)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f_param * (1 << this->fbits)));
}

Fixed::~Fixed()
{
		std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->nb = raw;
}

Fixed &Fixed::operator =(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->nb = src.getRawBits();
	return (*this);
}