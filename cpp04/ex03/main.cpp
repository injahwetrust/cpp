/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:50:08 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/18 20:50:26 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	Character	a("a");
	Ice	ice;
	Ice ice2;
	ice = ice2;
	Ice	ice3(ice);
	a.equip(new Ice());
	Character	b(a);
	b.use(0, a);
	a = b;
	AMateria		*tmp = NULL;

	MateriaSource	src;
	src.learnMateria(new Ice);
	src.learnMateria(new Cure);
	MateriaSource	src2(src);
	src2 = src;
	tmp = src2.createMateria("ice");
	a.equip(tmp);
	tmp =  src.createMateria("cure");
	a.equip(tmp);
	tmp =  src.createMateria("ce");
	a.unequip(0);
	a.use(-1, a);
	a.use(0, a);
	a.use(1, a);
	a.use(2, a);
	a.use(3, a);
	a.use(4, a);
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.unequip(2);
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	a.equip(new Ice());
	Character lol("lol");
	lol = a;
	a.showStats();
	lol.showStats();
	Character	pop(lol);
	pop.showStats();
	MateriaSource	d(src);
	return (0);
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }