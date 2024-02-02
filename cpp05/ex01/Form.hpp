/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:45:50 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/25 14:55:12 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class	Form
{
	public:
		Form();
		Form(const std::string &name, const int grade_to_sign, const int grade_to_exc);
		Form(const Form &toCpy);
		Form	&operator=(const Form &toCpy);
		~Form();
		const std::string	getName();
		bool				getSigned();
		int					getGradeToSign();
		int					getGradeToExc();
		void				beSigned(Bureaucrat &worker);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExc;
};

std::ostream	&operator<<(std::ostream &ostd, Form &toShow);