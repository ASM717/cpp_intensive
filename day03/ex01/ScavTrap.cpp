/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:29:13 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/02 21:02:58 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Second default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Second constructor called" << std::endl;
	this->setName(name);
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "Second copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "Second assignation operator called" << std::endl;
	this->ClapTrap::operator=(ref);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Second destructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " + this->getName() + " has enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " + this->getName() + " attack " + target + ", causing "
	<< this->getAttackDamage() << " points of damage!" << std::endl;
}
