/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:34:57 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/22 23:44:43 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Clap Trap default constructor called" << std::endl;
	m_hitpoints = 10;
	m_energy_points = 10;
	m_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "Clap Trap constructor called" << std::endl;
	m_name = name;
	m_hitpoints = 10;
	m_energy_points = 10;
	m_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Clap Trap copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << "Clap Trap assignation operator called" << std::endl;
	m_name = ref.m_name;
	m_hitpoints = ref.m_hitpoints;
	m_energy_points = ref.m_energy_points;
	m_attack_damage = ref.m_attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Clap Trap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " + m_name + " attack " + target + ", causing "
	<< m_attack_damage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " + m_name + " take " << amount << " damage "
	<< m_hitpoints << " hitpoints!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " + m_name + " has been " << amount << " repaired " << std::endl;
}

std::string ClapTrap::getName()
{
	return m_name;
}

unsigned int ClapTrap::getHitpoints()
{
	return m_hitpoints;
}

unsigned int ClapTrap::getEnergyPoints()
{
	return m_energy_points;
}

unsigned int ClapTrap::getAttackDamage()
{
	return m_attack_damage;
}

void ClapTrap::setName(std::string name)
{
	m_name = name;
}

void ClapTrap::setHitpoints(unsigned int hitpoints)
{
	m_hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(unsigned int energy_points)
{
	m_energy_points = energy_points;
}

void ClapTrap::setAttackDamage(unsigned int attack_damage)
{
	m_attack_damage = attack_damage;
}
