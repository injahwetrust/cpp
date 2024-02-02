/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:57:18 by bvaujour          #+#    #+#             */
/*   Updated: 2024/01/25 14:59:33 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Form		a("contrat", 50, 2);
		std::cout << a << std::endl;
		Bureaucrat	bur("bob", 14);
		a.beSigned(bur);
		std::cout << a << std::endl;
		
		//bur.signForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}