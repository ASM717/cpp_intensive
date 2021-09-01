/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:35:05 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/01 17:35:06 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Third default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Third constructor called" << std::endl;
	this->setName(name);
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "Third copy constructor called" << std::endl;
	*this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout << "Third assignation operator called" << std::endl;
	this->ClapTrap::operator=(ref);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Third destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " wants to high five!" << std::endl;
}
