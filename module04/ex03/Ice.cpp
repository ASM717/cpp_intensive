/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:59:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 13:06:33 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
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
	std::cout << SKY"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice desctructor called" << std::endl;
}
