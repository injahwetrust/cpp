/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:23:58 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/08 13:36:33 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *z;
	int	i(0);

	z = new Zombie[N];
	while (i < N)
	{
		z[i].giveName(name);
		i++;
	}
	return (z);
}