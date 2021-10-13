/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:41:46 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 13:44:41 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	ICharacter* kob = new Character("kob");
	std::cout << "--------------------------------" << std::endl;
	me->use(0, *kob);
	me->use(1, *kob);
	// me->unequip(0);
	// me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << RED"--------------------------------" << std::endl;
	delete kob;
	delete bob;
	delete me;
	delete src;
	std::cout << YEL"--------------------------------" << std::endl;
	system("leaks interface");
	return 0;
}

