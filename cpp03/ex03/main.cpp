/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:02:04 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/10 17:06:20 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int	main()
{
	DiamondTrap	a;
	DiamondTrap	b("groot");

	a = b;
	a.attack("ff");
	a.guardGate();
	a.highFivesGuys();
	a.WhoAmI();
	return (0);
}