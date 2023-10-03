/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:44:34 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/08 13:38:05 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	name("groot");
	int	i(0);
	int	N(5);
	Zombie	*z;
	z = zombieHorde(N, name);
	while (i < N)
	{
		z[i].announce();
		i++;
	}
	delete[] z;
}