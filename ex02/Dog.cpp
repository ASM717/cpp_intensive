/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:40 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 18:09:56 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	m_brain = new Brain();
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &ref)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = ref;
}

Dog &Dog::operator=(const Dog &ref)
{
	std::cout << "Dog assignation operator called" << std::endl;
	//проверка на самоприсваивание
	if (this == &ref)
		return *this;
	this->m_brain = new Brain();
	for (int i = 0; i < 100; ++i)
	{
		m_brain->setIdeas(i, m_brain->getIdeas(i));
	}
	this->type = ref.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Gav....Gav!!!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete m_brain;
}
