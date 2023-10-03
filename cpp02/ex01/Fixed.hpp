/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:49 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/30 12:55:58 by bvaujour         ###   ########.fr       */
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
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		Fixed	&operator =(const Fixed &src);

	private:
		int	nb;
		static const int fbits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif