/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:54:53 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 12:54:54 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap::ClapTrap(name), ScavTrap::ScavTrap(), FragTrap::FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->m_name = name;
	ClapTrap::setName(name + "_clap_name");
	this->FragTrap::getHitpoints();
	this->ScavTrap::getEnergyPoints();
	this->FragTrap::getAttackDamage();

}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = ref;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->ClapTrap::operator=(ref);
	m_name = ref.m_name;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->m_name << std::endl;
	std::cout << "ClapTrap name is " << this->ClapTrap::m_name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
