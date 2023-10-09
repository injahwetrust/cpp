/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:02:39 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/09 17:21:36 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a(15.3f);
	Fixed b(12.3f);
	Fixed c(15.3f);

	if (a > b)
		std::cout << "a > b" << std::endl;
	if (b < a)
		std::cout << "b < a" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	if (b <= a)
		std::cout << "b <= a" << std::endl;
	if (b != a)
		std::cout << "b != a" << std::endl;
	if (c == a)
		std::cout << "b == a" << std::endl;
	std::cout << "b + a = " << b + a << std::endl;
	std::cout << "b - a = " << b - a << std::endl;
	std::cout << "b * a = " << b * a << std::endl;
	std::cout << "b / a = " << b / a << std::endl;
	return 0;
}