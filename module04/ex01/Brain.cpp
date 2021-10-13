/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:51:55 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 16:48:02 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &ref) {
	std::cout << "Brain copy constructor called" << std::endl;
	this->operator=(ref);
}

Brain &Brain::operator=(Brain const &ref)
{
	std::cout << "Brain assignation operator called" << std::endl;
	//проверка на самоприсваивание
	if (this == &ref)
		return *this;
	if (this != &ref)
	{
		for(int i = 0; i < 100; i++)
		{
			this->m_called_ideas[i] = ref.m_called_ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string const &Brain::getIdeas(int index) const
{
	return this->m_called_ideas[index];
}

void Brain::setIdeas(int index, std::string ideas)
{
	this->m_called_ideas[index] = ideas;
}
