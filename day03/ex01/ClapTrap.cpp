/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:28:59 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/02 21:04:52 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name)
{
	std::cout << "Constructor called" << std::endl;
	m_name = name;
	m_hitpoints = 10;
	m_energy_points = 10;
	m_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	//дописать во всех заданиях this !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	std::cout << "Assignation operator called" << std::endl;
	m_name = ref.m_name;
	m_hitpoints = ref.m_hitpoints;
	m_energy_points = ref.m_energy_points;
	m_attack_damage = ref.m_attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
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
	m_hitpoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " + m_name + " has been " << amount << " repaired " << std::endl;
	m_hitpoints += amount;
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
