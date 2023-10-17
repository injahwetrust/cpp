/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:26:09 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/17 14:10:46 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int	main()
// {
// 	Animal	a;
// 	Animal	b;

// 	a.setType("chat");
// 	std::cout << "type of b: " << b.getType() << std::endl;
// 	b = a;
// 	std::cout << "type of b: " << b.getType() << std::endl;
// 	b.makeSound();
// 	std::cout << "End of Animal tests \n\n" << std::endl;
// 	///////////////////////////////////////////////////////
	
// 	Dog	c;
// 	Dog d;
// 	c = d;
	
// 	Cat e;
// 	e.makeSound();
	
// 	c.makeSound();
	
	
	
	
// 	std::cout << "\nEnd of main (all destructors comes now)\n" << std::endl;
// 	return (0);
// }

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete i;
	// delete j;
	// return 0;
// 	const Animal* j = new Dog();
// 	j->makeSound();
//  Dog	a;
// 	a.getBrain()->showIdeas();
// 	a.getBrain()->setIdeas("new");
// 	a.getBrain()->showIdeas();
// 	{
// 		Dog tmp;
// 		tmp.getBrain()->showIdeas();
// 		tmp = a;
// 		tmp.getBrain()->showIdeas();
// 	}
// 	delete j;
// 	std::cout << "apres le scope" << std::endl;
	// const Animal* j = new Cat();
	// const Animal* i = new Cat();
	// std::cout << "main delete now" << std::endl;
	// delete j;//should not create a leak
	// delete i;

	Brain 	a;
	Brain	b;
	b.setIdeas("hello");
	a = b;
	a.showIdeas();
	Dog	c;
	Dog	d;
	
	c = d;
	{
		
		Dog	e(c);
	}
	return 0;

	// int	n;
	// int	i;

	// i = 0;
	// n = 5;
	// const	Animal* tab[n];
	
	// while (i < n / 2)
	// {
	// 	tab[i] = new Dog();
	// 	i++;
	// }
	// while (i < n)
	// {
	// 	tab[i] = new Cat();
	// 	i++;
	// }
	// i = 0;
	// tab[0] = tab[1];
	// while (i < n)
	// {
	// 	tab[i]->makeSound();
	// 	delete tab[i];
	// 	i++;
	// }

}