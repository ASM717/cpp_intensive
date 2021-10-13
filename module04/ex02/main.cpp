/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:50:08 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 18:33:56 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	//проверка на то, что класс действительно является абстрактным
	// Animal test;

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

	system("leaks abstractAnimal");
	return (0);
}
