/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 11:16:22 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/01 18:02:21 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
//	try
//	{
//		Bureaucrat burocrat("Grigoriy", 149);
//		std::cout << burocrat << std::endl;
//	}
//	catch(std::exception const &exception)
//	{
//		std::cerr << exception.what() << std::endl;
//	}

	try
	{
		Bureaucrat test("test", 5);
		Form form_test1("form_test1", 1, 1);

//		std::cout << form_test1 << "\n";
		form_test1.beSigned(test);
//		std::cout << form_test1 << "\n";
		test.signForm(form_test1);

		Form form_test2("form_test2", 0, 3);
		Form form_test3("form_test3", 3, 200);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
