/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:06 by bvaujour          #+#    #+#             */
/*   Updated: 2024/02/02 17:41:45 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertion.hpp"
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
		ScalarConvertion::convert(av[1]);
	return 0;
}
