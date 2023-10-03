/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:31 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/01 11:57:51 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fbits = 8;

Fixed::Fixed()
{
	nb = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int &nb_in)
{
	std::cout << "Int constructor called" << std::endl;
	nb = nb_in << fbits;
}

Fixed::Fixed(const float &nb_in)
{
	std::cout << "Float constructor called" << std::endl;
	nb = (int)roundf(nb_in * (1 << fbits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}
void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->nb = raw;
}

int	Fixed::toInt(void) const
{
	return (nb >> fbits);
}

float	Fixed::toFloat(void) const
{
	return  ((float)nb  / (1 << fbits));
}

Fixed	&Fixed::operator =(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->nb = src.getRawBits();
	return (*this);
}

Fixed	Fixed::operator +(const Fixed &src)
{
	Fixed (this->toFloat() + src.toFloat());
	
	return (Fixed (this->toFloat() + src.toFloat()));
}

Fixed	Fixed::operator -(const Fixed &src)
{
	Fixed n(this->toFloat() - src.toFloat());

	return (n);
}

Fixed	Fixed::operator *(const Fixed &src)
{
	Fixed n(this->toFloat() * src.toFloat());

	return (n);
}

Fixed	Fixed::operator /(const Fixed &src)
{
	Fixed n(this->toFloat() / src.toFloat());

	return (n);
}

Fixed &Fixed::operator++(void)
{
	++nb;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);

	nb++;
	return (copy);
}

bool	Fixed::operator>(const Fixed &src) const
{
	if (nb > src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &src) const
{
	if (nb >= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &src) const
{
	if (nb < src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &src) const
{
	if (nb <= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &src) const
{
	if (nb == src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &src) const
{
	if (nb != src.getRawBits())
		return (true);
	return (false);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}









std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
    o << src.toFloat();
    return o;
}