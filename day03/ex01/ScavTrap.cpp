/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:29:13 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 11:13:45 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->m_name = name;
	this->m_hitpoints = 100;
	this->m_energy_points = 50;
	this->m_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->ClapTrap::operator=(ref);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + this->m_name + " has enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " + this->m_name + " attack " + target + ", causing "
	<< this->m_attack_damage << " points of damage!" << std::endl;
}
