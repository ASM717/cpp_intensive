/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:29 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 11:11:16 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	m_brain = new Brain();
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = ref;
}

Cat &Cat::operator=(const Cat &ref)
{
	std::cout << "Cat assignation operator called" << std::endl;
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

void Cat::makeSound() const
{
	std::cout << "Meowwww...Meowwwww!!!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete m_brain;
}
