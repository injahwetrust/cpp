/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/30 17:26:40 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat a("bob", 146);
	Bureaucrat b("jo", 137);
	Intern	juju;
	try
	{
		AForm *get;
		get = juju.MakeForm("ShrubberyCreationForm", "lol");
		a.signForm(*get);
		b.executeForm(*get);
		delete get;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

//robotomy sign = 72 exc = 45
//Presidential sign = 25 exc = 5
//robotomy sign = 145 exc = 137