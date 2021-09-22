/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:29:10 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/22 15:56:28 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Biba");
	ClapTrap copyClap(clapTrap);
	ScavTrap scavTrap("Boba");
	ScavTrap copyScav(scavTrap);
	std::cout << "------------------" << std::endl;
	copyClap.attack(clapTrap.getName());
	copyScav.attack(scavTrap.getName());
	clapTrap.attack(scavTrap.getName());
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	clapTrap.beRepaired(5);
	scavTrap.guardGate();
	std::cout << "------------------" << std::endl;
	return (0);
}
