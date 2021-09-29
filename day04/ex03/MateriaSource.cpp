/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:31:24 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/29 14:54:57 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		m_materia_src[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->m_materia_src[i] = ref.m_materia_src[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ref)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &ref)
	{
		for (int i = 0; i < 4; i++)
			this->m_materia_src[i] = ref.m_materia_src[i]->clone();
	}
	return *this;
}

AMateria *MateriaSource::getMateria(int index) const
{
	return this->m_materia_src[index];
}

void MateriaSource::learnMateria(AMateria *mater)
{
	for (int i = 0; i < 4; i++){
		if (this->m_materia_src[i] == NULL){
			this->m_materia_src[i] = mater;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type_mat)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->m_materia_src[i] != NULL && this->m_materia_src[i]->getType() == type_mat)
			return (this->m_materia_src[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource desctructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (m_materia_src[i] != NULL)
			delete m_materia_src[i];
	}
}


