/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:07:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/30 15:22:59 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCpy) : AForm(toCpy)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCpy)
{
	this->AForm::operator=(toCpy);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string	fileName;

	if (getSigned() == false)
		throw(NotSignedException());
	if (executor.getGrade() > getGradeToExc())
		throw(Bureaucrat::GradeTooLowException());
	fileName = this->getTarget() + "_Shrubbery";
	std::ofstream	file(fileName.c_str());
	if (file.is_open())
	{
		file <<
		"		               ,@@@@@@@,\n\
		       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
		    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
		   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88\n\
		   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
		   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
		   `&%\\ ` /%&'    |.|        \\ '|8'\n\
		       |o|        | |         | |\n\
		       |.|        | |         | |" << std::endl;
		std::cerr << executor.getName() << " executed " << this->getName() << std::endl;
		file.close();
	}
}

