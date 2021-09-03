/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:29:10 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 10:53:25 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	clapTrap("Biba");
	ScavTrap	scavTrap("Boba");
	ScavTrap	copy(scavTrap);
	std::cout << "------------------" << std::endl;
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	clapTrap.attack(scavTrap.getName());
	clapTrap.beRepaired(5);
	scavTrap.guardGate();
	std::cout << "------------------" << std::endl;
	return (0);
}
