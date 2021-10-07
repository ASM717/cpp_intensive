/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:16:22 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/07 20:39:20 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat burocrat("Grigoriy", 0);
		std::cout << burocrat << std::endl;
		burocrat.incrementGrade();
		std::cout << burocrat << std::endl;
	}
	catch(std::exception const &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat burocrat1("Mihail", 151);
		std::cout << burocrat1 << std::endl;
	}
	catch(std::exception const &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat burocrat2("Vladimir", -1);
		std::cout << burocrat2 << std::endl;
	}
	catch(std::exception const &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat burocrat3("Alexandr", 150);
		std::cout << burocrat3 << std::endl;
		burocrat3.decrementGrade();
		std::cout << burocrat3 << std::endl;
	}
	catch(std::exception const &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return (0);
}
