/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:26:09 by bvaujour          #+#    #+#             */
/*   Updated: 2023/10/16 14:52:17 by bvaujour         ###   ########.fr       */
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
	const Animal* j = new Cat();
	const Animal* i = new Cat();
	j = i;
	delete j;//should not create a leak
	delete i;
	return 0;
}