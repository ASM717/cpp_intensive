/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:55:02 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 12:55:03 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->m_name = name;
	this->m_hitpoints = 100;
	this->m_energy_points = 100;
	this->m_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = ref;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->ClapTrap::operator=(ref);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->m_name << " wants to high five!" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " + this->m_name + " attack " + target + ", causing "
	<< this->m_attack_damage << " points of damage!" << std::endl;
}
