/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:52:21 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 18:30:24 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const
{
	return this->m_name;
}


Character::Character(std::string const & name)
{
	this->m_name = name;
	for (int i = 0; i < 4; i++)
		m_materia[i] = NULL;
}

Character::Character(Character const &ref)
{

}

Character &Character::operator=(Character const &ref)
{

}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_materia[i] != NULL)
			delete this->m_materia[i];
	}
}
