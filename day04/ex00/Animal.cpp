/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:24:54 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 19:27:18 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string m_type)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = m_type;
}

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = ref;
}

Animal &Animal::operator=(const Animal &ref)
{
	std::cout << "Animal assignation operator called" << std::endl;
	return (*this);
}

std::string Animal::getType()
{
	return this->type;
}

void Animal::makeSound()
{
	std::cout << "Animal VOICE" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
