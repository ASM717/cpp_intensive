/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:50:08 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 18:17:48 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "--------------------------------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "--------------------------------" << std::endl;
	delete j;
	delete i;
	delete meta;
	std::cout << "--------------------------------" << std::endl;
	Animal *animal_planet[100];

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			animal_planet[i] = new Cat();
		else
			animal_planet[i] = new Dog();
		animal_planet[i]->makeSound();
	}
	std::cout << "--------------------------------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		delete animal_planet[i];
	}
	std::cout << "--------------------------------" << std::endl;

	system("leaks deepCopy");
	return (0);
}
