/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:59:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 15:42:11 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &ref) : AMateria(ref)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &ref)
{
	std::cout << "Ice assignation operator called" << std::endl;
	this->AMateria::operator=(ref);
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->AMateria::use(target);
}

Ice::~Ice()
{
	std::cout << "Cure desctructor called" << std::endl;
}
