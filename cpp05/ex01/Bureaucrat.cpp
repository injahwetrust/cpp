/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:24 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/25 14:10:01 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	std::cout << "Name and Grade Bureaucrat constructor called" << std::endl;
	if (_grade > 150)
		throw (GradeTooLowException());
	else if (_grade < 1)
		throw (GradeTooHighException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCpy)
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	*this = toCpy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &toCpy)
{
	std::cout << "Bureaucrat operator = called" << std::endl;
	if (this != &toCpy)
		*this = toCpy;
	return (*this);
}

const std::string	Bureaucrat::getName()
{
	return (_name);
}

int	Bureaucrat::getGrade()
{
	return (_grade);
}

void	Bureaucrat::upgrade()
{
	if (_grade - 1 < 1)
		throw (GradeTooHighException());
	_grade--;
}

void	Bureaucrat::downgrade()
{
	if (_grade + 1 > 150)
		throw (GradeTooLowException());
	_grade++;
}

void	Bureaucrat::signForm(Form &contrat)
{
	try
	{
		contrat.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " could'nt sign Form because " << e.what() << std::endl;
	}
	
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Grade too low");
}


std::ostream	&operator<<(std::ostream &ostd, Bureaucrat &toShow)
{
	ostd << toShow.getName() << ": Bureaucrat with grade " << toShow.getGrade();
	return (ostd);
}
