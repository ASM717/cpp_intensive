/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:07:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 18:51:28 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
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

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
