/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:03:47 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/09 11:39:58 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_class = "FragTrap";
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap Name Edit constructor called" << std::endl;
	_name = name;
	_class = "FragTrap";
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

FragTrap::FragTrap(FragTrap &src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::string	answer;
	if (_hp > 0)
	{
		std::cout << "FragTrap " << _name << " ask you a HighFives!" << std::endl;
		while (answer != "y" && answer != "n")
		{
			std::cout << "will you do?(y/n)" << std::endl;
			if (!std::getline(std::cin, answer))
				break ;
		}
		if (answer == "y")
			std::cout << "FragTrap " << _name << " says \"you're ma bro, bro !\"" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << "can't high five while dead" << std::endl;
}