/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:21:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 17:43:09 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->WrongAnimal::operator=(ref);
	*this = ref;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat...Meowwww...Meowwwww!!!" << std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
