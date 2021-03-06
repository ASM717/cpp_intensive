/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:14 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 18:27:30 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
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
	this->type = ref.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
