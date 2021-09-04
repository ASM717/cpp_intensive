/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:40 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 14:49:41 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << type + " default constructor called" << std::endl;
}

Dog::Dog(const Dog &ref)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->Animal::operator=(ref);
	*this = ref;
}

Dog &Dog::operator=(const Dog &ref)
{
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Gav....Gav!!!" << std::endl;
}

Dog::~Dog()
{
	std::cout << type + " destructor called" << std::endl;
}