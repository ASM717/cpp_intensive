/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:31:05 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/06 12:28:03 by amuriel          ###   ########.fr       */
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
		scf = someRandomIntern.makeForm("shrubbery creation", "FasBender");
		AForm* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Jarvis");
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
