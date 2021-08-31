/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:47:57 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/31 16:25:31 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Thomas Shelby");

	clapTrap.attack("Chester Campbell");
	clapTrap.takeDamage(100);
	clapTrap.beRepaired(3);
}
