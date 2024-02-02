/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:56:21 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/25 15:01:17 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default_form"), _signed(false), _gradeToSign(150), _gradeToExc(150)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string &name, const int grade_to_sign, const int grade_to_exc): _name(name), _signed(false), _gradeToSign(grade_to_sign), _gradeToExc(grade_to_exc)
{
	std::cout << "Form constructor called" << std::endl;
	if (_gradeToSign < 1 || _gradeToExc < 1)
		throw(GradeTooHighException());
	else if (_gradeToSign > 150 || _gradeToExc > 150)
		throw(GradeTooLowException());
	
}

Form::Form(const Form &toCpy): _name(toCpy._name), _signed(toCpy._signed), _gradeToSign(toCpy._gradeToSign), _gradeToExc(toCpy._gradeToExc)
{
	std::cout << "Copy Form constructor called" << std::endl;
	*this = toCpy;
}

Form	&Form::operator=(const Form &toCpy)
{
	if (this != &toCpy)
		*this = toCpy;
	return (*this);
}

Form::~Form()
{
	std::cout << "Default Form destructor called" << std::endl;
}

const std::string	Form::getName()
{
	return(_name);
}

bool	Form::getSigned()
{
	return(_signed);
}

int	Form::getGradeToSign()
{
	return(_gradeToSign);
}

int	Form::getGradeToExc()
{
	return(_gradeToExc);
}

void		Form::beSigned(Bureaucrat &worker)
{
	if (worker.getGrade() > _gradeToSign)
		throw (GradeTooHighException());
	_signed = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade too low");
}

std::ostream	&operator<<(std::ostream &o, Form &toShow)
{
	o << "\nForm: " << toShow.getName() << "\nGrade to sign: " << toShow.getGradeToSign() << "\nGrade to exc: " << toShow.getGradeToExc() << "\nsigned: " << toShow.getSigned() << std::endl;
	return (o); 
}
