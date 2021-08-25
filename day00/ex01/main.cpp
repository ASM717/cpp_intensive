/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:48:46 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 15:27:41 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static void printSearch()
{
	std::cout << BLUE"|" << std::setw(10) << "index" << "|" << std::setw(10)
	<< "first name" << "|" << std::setw(10) << "last name" << "|" <<
	std::setw(10) << "nickname" << "|" << std::endl;
}

int main(void)
{
	std::string input_str;
	Phonebook phonebook;
	std::cout << YEL"::::::::::::::>>>PHONE BOOK<<<::::::::::::::" << std::endl;
	while (1)
	{
		std::cout << std::endl;
		std::cout << BLUE"::::::::::::::: PROGRAM MENU :::::::::::::::" << std::endl;
		std::cout << PURPLE":::::::::::: ADD | SEARCH | EXIT :::::::::::" << std::endl;
		std::cout << GREEN"Enter command: ";
		std::getline(std::cin, input_str);
		if (std::cin.eof())
			break;
		if (input_str == "ADD")
		{
			phonebook.add();
		}
		else if (input_str == "SEARCH")
		{
			printSearch();
			phonebook.search();
		}
		else if (input_str == "EXIT")
			exit(1);
		else
			std::cerr << RED"Enter the correct command, please!" << std::endl;
	}
	return (0);
}
