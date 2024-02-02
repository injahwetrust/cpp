/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:07:54 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/29 12:25:29 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCpy): AForm(toCpy)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &toCpy)
{
	this->AForm::operator=(toCpy);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	std::srand(std::time(NULL));
	if (getSigned() == false)
		throw(NotSignedException());
	if (executor.getGrade() > getGradeToExc())
		throw(Bureaucrat::GradeTooLowException());
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}