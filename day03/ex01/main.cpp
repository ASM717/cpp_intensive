/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:29:10 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/31 17:29:11 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavTrap("Biba");
//	ScavTrap scavTrap2 = scavTrap;
	scavTrap.attack("Boba");
	scavTrap.takeDamage(100);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
//	scavTrap2.attack("Koba");
//	scavTrap2.takeDamage(50);
//	scavTrap2.takeDamage(6);

	return (0);
}
