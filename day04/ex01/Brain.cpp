/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:51:55 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/10 13:46:30 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}
//разобраться с deeep cpy

Brain::Brain(const Brain &ref) {
	std::cout << "Brain copy constructor called"<<std::endl;
	*this = ref;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdeas()
{

}

void Brain::setIdeas(std::string ideas)
{

}
