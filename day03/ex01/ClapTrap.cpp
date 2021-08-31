/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:28:59 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/31 17:29:00 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	//std::cout << "Default constructor called" << std::endl;
	// m_name = nullptr;
	// m_hitpoints = 10;
	// m_energy_points = 10;
	// m_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	//std::cout << "Reload constructor called" << std::endl;
	m_name = name;
	m_hitpoints = 10;
	m_energy_points = 10;
	m_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	*this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	m_name = ref.m_name;
	m_hitpoints = ref.m_hitpoints;
	m_energy_points = ref.m_energy_points;
	m_attack_damage = ref.m_attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	// std::cout << "Destructor Called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " + m_name + " attack " + target + ", causing "
	<< m_attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	m_hitpoints -= amount;
	std::cout << "ClapTrap " + m_name + " take " << amount << " damage "
	<< m_hitpoints << " hitpoints!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	m_hitpoints += amount;
	if (m_hitpoints <= 0)
		m_hitpoints = 0;
	std::cout << "ClapTrap " + m_name + " be " << amount << " repaired "
	<< m_hitpoints << " hitpoints!" << std::endl;
}
