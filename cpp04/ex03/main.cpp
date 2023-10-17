/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:50:08 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 17:52:35 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main()
{
	Ice a;
	Ice *b = a.clone();
	Ice c(a);
	Cure d;
	a = c;
	Character e("me");
	
	e.equip(&a);
	e.use(0, e);
	delete b;
	return (0);
}