/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:47:57 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/01 10:26:38 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Thomas Shelby");
	ClapTrap clapTrap2 = clapTrap;

	clapTrap.attack("Chester Campbell");
	clapTrap.takeDamage(100);
	clapTrap.beRepaired(3);

	clapTrap2.attack("Mr. Gold");
	clapTrap2.takeDamage(50);
	clapTrap2.beRepaired(6);
}
