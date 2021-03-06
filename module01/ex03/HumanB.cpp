/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:18:11 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:18:12 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{}

HumanB::HumanB(std::string name)
{
	this->m_name = name;
	this->m_weapon = NULL;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void) const
{
	if (this->m_weapon)
		std::cout << m_name << " " << m_weapon->getType() << std::endl;
	else
		std::cout << m_name << " without armor\n";
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
	return;
}
