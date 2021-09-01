/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:48:06 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/01 11:34:49 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
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
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
