/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:28:42 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/07 10:28:43 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	try
	{
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm* scf;
		scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
		AForm* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Jarvis");
		Bureaucrat bureaucrat_1("Grigiriy", 1);
		Bureaucrat bureaucrat_2("Vladimir", 151);
		std::cout << bureaucrat_1 << std::endl;
		std::cout << bureaucrat_2 << std::endl;
		AForm* ppf_err;
		ppf_err = someRandomIntern.makeForm("presidential ", "Jarvis");

		delete rrf;
		delete scf;
		delete ppf;
		delete ppf_err;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	system("leaks beats_coffee_making");
	return (0);
}
