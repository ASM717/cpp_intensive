/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:29 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 14:49:30 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << type + " default constructor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->Animal::operator=(ref);
	*this = ref;
}

Cat &Cat::operator=(const Cat &ref)
{
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowwww...Meowwwww!!!" << std::endl;
}


Cat::~Cat()
{
	std::cout << type + " destructor called" << std::endl;
}
