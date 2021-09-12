/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:51:55 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/11 11:18:16 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &ref) {
	std::cout << "Brain copy constructor called"<<std::endl;
	*this = ref;
}

Brain &Brain::operator=(Brain const &ref)
{
	std::cout << "Brain assignation operator called" << std::endl;
//	if (this != &ref)
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			this->called_ideas[i] = ref.called_ideas[i];
//		}
//	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}



// std::string Brain::getIdeas()
// {

// }

// void Brain::setIdeas(std::string ideas)
// {

// }
