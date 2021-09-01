/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:35:13 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/01 17:35:14 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	clapTrap("Biba");
	FragTrap	clapTrap2("Boba");
	FragTrap	copyTrap(clapTrap2);
	std::cout << "------------------" << std::endl;
	clapTrap2.attack(clapTrap.getName());
	clapTrap.takeDamage(clapTrap2.getAttackDamage());
	clapTrap.attack("Boba");
	clapTrap.beRepaired(5);
	clapTrap2.highFivesGuys();
	std::cout << "------------------" << std::endl;
	return (0);
}
