/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:49 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/01 11:56:51 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed(const int &nb_in);
		Fixed(const float &nb_in);
		~Fixed();
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
		Fixed				&operator =(const Fixed &src);
		Fixed				operator +(const Fixed &src);
		Fixed				operator -(const Fixed &src);
		Fixed				operator *(const Fixed &src);
		Fixed				operator /(const Fixed &src);
		Fixed				&operator++(void);
		Fixed				operator++(int);
		bool				operator>(const Fixed &src) const;
		bool				operator>=(const Fixed &src) const;
		bool				operator<(const Fixed &src) const;
		bool				operator<=(const Fixed &src) const;
		bool				operator==(const Fixed &src) const;
		bool				operator!=(const Fixed &src) const;
		static				Fixed	&min(Fixed &a, Fixed &b);
		static const		Fixed	&min(const Fixed &a, const Fixed &b);
		static				Fixed	&max(Fixed &a, Fixed &b);
		static const		Fixed	&max(const Fixed &a, const Fixed &b);
	private:
		int					nb;
		static const int	fbits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif