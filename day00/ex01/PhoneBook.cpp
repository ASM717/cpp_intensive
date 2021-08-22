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
	if(m_firstName.size() > 10)
	{
		m_firstName = m_firstName.substr(0, 9);
		m_firstName.insert(9, ".");
	}
	if(m_lastName.size() > 10)
	{
		m_lastName = m_lastName.substr(0, 9);
		m_lastName.insert(9, ".");
	}
	if(m_nickName.size() > 10)
	{
		m_nickName = m_nickName.substr(0, 9);
		m_nickName.insert(9, ".");
	}
	std::cout << GREEN "|" << std::setw(10) << getIndex() << "|" << std::setw
	(10) << getFirstName() << "|" << std::setw(10) << getLastName() << "|" <<
	std::setw(10) << getNickName() << "|" << std::endl;
}
