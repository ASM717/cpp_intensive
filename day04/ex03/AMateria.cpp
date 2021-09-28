/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:40:35 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 11:22:04 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
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

void AMateria::use(ICharacter& target){
	(void)target;
	std::cout << "AMateria use" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria desctructor called" << std::endl;
}