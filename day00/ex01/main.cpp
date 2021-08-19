/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:48:46 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/19 17:53:03 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string input_str;
	PhoneBook phoneBook[ARR];
	int count = 0;

	std::cout << YEL"::::::::::::::>>>PHONE BOOK<<<::::::::::::::" << std::endl;
	while (1)
	{
		std::cout << BLUE"::::::::::::::: PROGRAM MENU :::::::::::::::" << std::endl;
		std::cout << PURPLE":::::::::::: ADD | SEARCH | EXIT :::::::::::" << std::endl;
		std::cout << GREEN"Enter command: ";
		std::getline(std::cin, input_str);
		if (input_str == "ADD")
		{
			if(count < 8)
			{
				phoneBook[count].addContact();
				count++;
			}
		}
		else if (input_str == "SEARCH")
			searchContact();
		else if (input_str == "EXIT")
			exit(1);
		else
			std::cout << RED"Enter the correct command, please!" << std::endl;
	}
	return (0);
}
