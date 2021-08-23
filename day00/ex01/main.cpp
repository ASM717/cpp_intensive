/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:48:46 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/23 12:31:32 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void printSearch()
{
	std::cout << BLUE"|" << std::setw(10) << "index" << "|" << std::setw(10)
	<< "first name" << "|" << std::setw(10) << "last name" << "|" <<
	std::setw(10) << "nickname" << "|" << std::endl;
}

int main(void)
{
	std::string input_str;
	PhoneBook phoneBook[ARR];
	int count = 0;
	int check_num = 0;
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
				phoneBook[count].addContact(count + 1);
				count++;
				if (check_num != 8) check_num = count;
			}
			else if (count == 8)
			{
				check_num = 8;
				count = 0;
				phoneBook[count].addContact(count + 1);
				count++;
			}
		}
		else if (input_str == "SEARCH")
		{
			printSearch();
			if(count <= 8)
			{
				for(int i = 0; i < check_num; i++)
					phoneBook[i].searchContact();
			}
			std::string index_input;
			std::cout << GREEN"Enter the index: ";
			std::getline(std::cin, index_input);
			int idx_input = atoi(index_input.c_str());
			if(idx_input && idx_input < count + 1)
			{
				phoneBook[idx_input - 1].checkIndexContact(idx_input);
			} else std::cout << RED"Error index!" << std::endl;
		}
		else if (input_str == "EXIT")
			exit(1);
		else
			std::cout << RED"Enter the correct command, please!" << std::endl;
	}
	return (0);
}
