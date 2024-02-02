/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/31 13:41:43 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	a("Bob", 999); // a Bureaucrate must have a grade between 1 and 150
		std::cout << "TEST 0 " << a << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	a("Jules", 0); // a Bureaucrate must have a grade between 1 and 150
		std::cout << "TEST 1 " <<  a << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	a("Chris", 150);
		std::cout <<  "TEST 2 " << a << std::endl; // doit s'ecrire
		a.downgrade();
		std::cout << a << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	a("Sarah", 1);
		std::cout << "TEST 3 " << a << std::endl; // doit s'ecrire
		a.upgrade();
		std::cout << a << std::endl; // ne devrait pas s'ecrire car exeption catched
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}