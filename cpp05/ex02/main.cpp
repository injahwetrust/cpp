/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/29 16:57:13 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat a("bob", 150);
	Bureaucrat b("jo", 1);
	RobotomyRequestForm c("me");
	b.signForm(c);
	b.executeForm(c);
	ShrubberyCreationForm d("lui");
	b.signForm(d);
	b.executeForm(d);
	//Bureaucrat c(b);
	a = b;
	std::cout << a << std::endl;
	//std::cout << c << std::endl;
	//std::cout << &b << std::endl;
	//std::cout << &c << std::endl;

}