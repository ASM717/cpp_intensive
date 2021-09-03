/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:55:13 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 12:55:14 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondTrap("Biba");
	DiamondTrap diamondTrap1("Boba");
	DiamondTrap copy = diamondTrap;
	std::cout << "--------------------------------------------------" << std::endl;
	copy.attack(diamondTrap1.getName());
	diamondTrap1.takeDamage(copy.getAttackDamage());
	diamondTrap1.beRepaired(10);
	copy.guardGate();
	copy.highFivesGuys();
	copy.whoAmI();
	diamondTrap1.whoAmI();
	diamondTrap.attack(diamondTrap1.getName());
	std::cout << "--------------------------------------------------" << std::endl;
	return (0);
}
