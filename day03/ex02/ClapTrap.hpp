/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:35:00 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/21 17:28:07 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string m_name;
	unsigned int m_hitpoints;
	unsigned int m_energy_points;
	unsigned int m_attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(const ClapTrap &ref);
	ClapTrap& operator=(const ClapTrap &ref);
	~ClapTrap();

	std::string getName();
	unsigned int getHitpoints();
	unsigned int getEnergyPoints();
	unsigned int getAttackDamage();
	void setName(std::string name);
	void setHitpoints(unsigned int hitpoints);
	void setEnergyPoints(unsigned int energy_points);
	void setAttackDamage(unsigned int attack_damage);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
