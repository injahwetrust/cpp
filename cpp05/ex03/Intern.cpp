/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:33:26 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/30 16:21:35 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &toCpy)
{
	*this = toCpy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &toCpy)
{
	if (this != &toCpy)
		*this = toCpy;
	return (*this);
}

const char	*Intern::NoExistingForm::what() const throw()
{
	return ("Intern Form error exception");
}

AForm	*Intern::MakeForm(std::string formCall, std::string formTarget)
{
	int	i(0);
	std::string	names[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	while (i < 3 && names[i] != formCall)
		i++;
	switch (i)
	{
		case 0:
			return (new PresidentialPardonForm(formTarget));
		case 1:
			return (new RobotomyRequestForm(formTarget));
		case 2:
			return (new ShrubberyCreationForm(formTarget));
		default:
			throw (NoExistingForm());
	}
}