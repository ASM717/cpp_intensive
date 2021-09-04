/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:23:05 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 13:42:32 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	//without virtual method
	const WrongAnimal* wrongAnimal = new WrongCat();
	const WrongAnimal* wrongAnimal1 = new WrongAnimal();

	const WrongCat* wrongCat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrongAnimal->makeSound();
	wrongAnimal1->makeSound();
	wrongCat->makeSound();

	delete j;
	delete i;
	delete meta;
	delete wrongAnimal;
	delete wrongAnimal1;
	system("leaks polymorphism");
	return (0);
}
