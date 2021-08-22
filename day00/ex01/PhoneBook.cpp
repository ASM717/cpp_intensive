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

#include "PhoneBook.hpp"

// PhoneBook::PhoneBook(std::string name, std::string surname,
// std::string nick, std::string phone, std::string secret);

void PhoneBook::addContact(int index)
{
	std::string input_str;

	setIndex(index);
	std::cout << SKY"Enter first name: ";
	std::getline(std::cin, input_str);
	setFirstName(input_str);
	std::cout << SKY"Enter last name: ";
	std::getline(std::cin, input_str);
	setLastName(input_str);
	std::cout << SKY"Enter nickname: ";
	std::getline(std::cin, input_str);
	setNickName(input_str);
	std::cout << SKY"Enter phone number: ";
	std::getline(std::cin, input_str);
	setPhoneNumber(input_str);
	std::cout << SKY"Enter darkest secret: ";
	std::getline(std::cin, input_str);
	setDarkestSecret(input_str);
}

void PhoneBook::searchContact(void)
{
	std::cout << "|" << std::setw(10) << getIndex() << "|" << std::setw(10)
	<< getFirstName() << "|" << std::setw(10) << getLastName() << "|" <<
	std::setw(10) << getNickName() << "|" << std::endl;
}
