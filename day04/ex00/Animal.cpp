/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:24:54 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 19:09:39 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	//std::cout << type + " default constructor called" << std::endl;
}

Animal::Animal(std::string m_type)
{
	//std::cout << "Animal constructor called" << std::endl;
	this->type = m_type;
}

Animal::Animal(const Animal &ref)
{
	//std::cout << "Animal copy constructor called" << std::endl;
	*this = ref;
}

Animal &Animal::operator=(const Animal &ref)
{
	//std::cout << "Animal assignation operator called" << std::endl;
	this->type = ref.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal say some voice" << std::endl;
}

Animal::~Animal()
{
	//std::cout << type + " destructor called" << std::endl;
}
