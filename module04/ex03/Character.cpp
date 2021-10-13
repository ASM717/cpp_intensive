/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:52:21 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/29 14:53:50 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	std::cout << "Character constructor called" << std::endl;
	m_name = name;
	for (int i = 0; i < 4; i++)
		m_materia[i] = NULL;
}

Character::Character(Character const &ref)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->m_name = ref.m_name;
	for(int i = 0; i < 4; i++)
	{
		this->m_materia[i] = ref.m_materia[i]->clone();
	}
}

Character &Character::operator=(Character const &ref)
{
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &ref)
	{
		m_name = ref.m_name;
		for (int i = 0; i < 4; i++)
			this->m_materia[i] = ref.m_materia[i]->clone();
	}
	return *this;
}

AMateria const *Character::getMateria(int index) const
{
	return m_materia[index];
}

std::string const &Character::getName() const
{
	return m_name;
}

void Character::equip(AMateria* mater)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_materia[i] == NULL)
		{
			this->m_materia[i] = mater;
			break;
		}
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < 4)
	{
		m_materia[index] = NULL;
	}
}

void Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index < 4 && m_materia[index] != NULL)
		m_materia[index]->use(target);
}

Character::~Character()
{
	std::cout << "Character desctructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (m_materia[i] != NULL)
			delete m_materia[i];
	}
}
