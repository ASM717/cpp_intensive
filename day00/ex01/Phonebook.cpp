/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:58:31 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/22 10:58:32 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->count = 0;
	this->check_num = 0;
}

Phonebook::~Phonebook(){}

void Phonebook::add()
{
	if(count < 8)
	{
		contact[count].addContact(count + 1);
		count++;
		if (check_num != 8) check_num = count;
	}
	else if (count == 8)
	{
		check_num = 8;
		count = 0;
		contact[count].addContact(count + 1);
		count++;
	}
}

void Phonebook::search()
{
	if(count <= 8)
	{
		for(int i = 0; i < check_num; i++)
			contact[i].searchContact();
	}
	std::string index_input;
	std::cout << GREEN"Enter the index: ";
	std::getline(std::cin, index_input);
	int idx_input = atoi(index_input.c_str());
	if(idx_input && idx_input < count + 1)
	{
		contact[idx_input - 1].checkIndexContact(idx_input);
	} else std::cout << RED"Error index!" << std::endl;
}