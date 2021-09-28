/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:08:24 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 15:41:10 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &ref) : AMateria(ref)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &ref)
{
	std::cout << "Cure assignation operator called" << std::endl;
	this->AMateria::operator=(ref);
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	this->AMateria::use(target);
}

Cure::~Cure()
{
	std::cout << "Cure desctructor called" << std::endl;
}

