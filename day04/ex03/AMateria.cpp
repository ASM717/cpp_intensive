/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:40:35 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 12:05:37 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	m_type = type;
	std::cout << "AMateria constructor called" << std::endl;
}

std::string	const & AMateria::getType() const
{
	return this->m_type;
}

AMateria::AMateria(AMateria const &ref)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = ref;
}

AMateria &AMateria::operator=(AMateria const &ref)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this == &ref)
		return *this;
	if (this != &ref)
		this->m_type = ref.m_type;
	return *this;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria use " + target.getName() << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria desctructor called" << std::endl;
}
