/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:26:38 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 12:32:06 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << type + " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string m_type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = m_type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = ref;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->type = ref.getType();
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal say some voice" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type + " destructor called" << std::endl;
}
