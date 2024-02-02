/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:28:44 by bvaujour          #+#    #+#             */
/*   Updated: 2024/02/02 19:00:56 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"

static void	char_conv(const std::string &input)
{
	std::cout << "char: ";
	if (std::isprint(input.at(0)))
		std::cout << input.at(0) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(input.at(0)) << std::endl;
	std::cout << "float: " << static_cast<float>(input.at(0)) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(input.at(0)) << ".0" << std::endl;
}

static void	science(const std::string &input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff")
	{
		std::cout << "float: " << input.at(0) << "inff" << std::endl;
		std::cout << "double: " << input.at(0) << "inf" << std::endl;
	}
	else
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}
void	ScalarConvertion::convert(const std::string &input)
{
	if (input.length() == 1 && !std::isdigit(input.at(0)))
		char_conv(input);
	else if (input == "nan" || input == "nanf" || input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff")
		science(input);
}
