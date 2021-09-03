/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:35:13 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/03 11:30:03 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	clapTrap("Biba");
	FragTrap	fragTrap("Boba");
	FragTrap	copyTrap(fragTrap);
	std::cout << "------------------" << std::endl;
	fragTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(fragTrap.getAttackDamage());
	clapTrap.attack(fragTrap.getName());
	clapTrap.beRepaired(5);
	fragTrap.highFivesGuys();
	std::cout << "------------------" << std::endl;
	return (0);
}
