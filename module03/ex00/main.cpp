/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:47:57 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/22 18:41:53 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Biba");
	ClapTrap clapTrap2 = clapTrap;
	std::cout << "------------------" << std::endl;
	clapTrap.attack("Boka");
	clapTrap.takeDamage(100);
	clapTrap.beRepaired(3);

	clapTrap2.attack("Boba");
	clapTrap2.takeDamage(50);
	clapTrap2.beRepaired(6);
	std::cout << "------------------" << std::endl;
	return (0);
}
