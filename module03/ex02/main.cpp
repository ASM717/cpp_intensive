/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:35:13 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/22 16:52:35 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Biba");
	ClapTrap copyClap(clapTrap);
	FragTrap fragTrap("Boba");
	FragTrap copyTrap(fragTrap);
	std::cout << "------------------" << std::endl;
	copyClap.attack(clapTrap.getName());
	clapTrap.attack(clapTrap.getName());
	clapTrap.attack(fragTrap.getName());
	copyTrap.attack(fragTrap.getName());
	fragTrap.attack(fragTrap.getName());
	fragTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(fragTrap.getAttackDamage());
	clapTrap.beRepaired(5);
	fragTrap.highFivesGuys();
	std::cout << "------------------" << std::endl;
	return (0);
}
