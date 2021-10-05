/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:31:05 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/05 15:44:58 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat buro_crat_1("Grigoriy", 1);
		Bureaucrat buro_crat_2("Vladimir", 10);
		std::cout << buro_crat_1 << std::endl;
		std::cout << buro_crat_2 << std::endl;
		AForm *tree_ascii = new ShrubberyCreationForm("Home");
		std::cout << *tree_ascii << std::endl;
		tree_ascii->beSigned(buro_crat_1);
		tree_ascii->execute(buro_crat_2);
		std::cout << *tree_ascii << std::endl;
		AForm *robot = new RobotomyRequestForm("Android");
		std::cout << *robot << std::endl;
		robot->beSigned(buro_crat_1);
		for (int i = 0; i < 10; i++)
			robot->execute(buro_crat_2);
		std::cout << *robot << std::endl;
		AForm *president = new PresidentialPardonForm("Mr. President");
		std::cout << *president << std::endl;
		president->beSigned(buro_crat_1);
		std::cout << *president << std::endl;
		president->execute(buro_crat_2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
