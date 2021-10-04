/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:16:22 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/04 20:43:20 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat burocrat("Grigoriy", 149);
		std::cout << burocrat << std::endl;
		Form form_1("Paper_1", 150, 150);
		std::cout << form_1 << std::endl;
		form_1.beSigned(burocrat);
		burocrat.signForm(form_1);
	}
	catch(std::exception const &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "------------------------------------------" << std::endl;
	try
	{
		Bureaucrat burocrat_2("Vladimir", 100);
		std::cout << burocrat_2 << std::endl;
		Form form_2("Paper_2", -1, -1);
		std::cout << form_2 << std::endl;
		form_2.beSigned(burocrat_2);
		burocrat_2.signForm(form_2);
	}
	catch(std::exception const &exception)
	{
		std::cerr << exception.what() << std::endl;
	}

	return 0;
}
