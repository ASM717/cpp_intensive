/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:48:11 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/20 10:53:10 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define ARR 8
#include <iostream>
#include <iomanip>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define BLUE		"\x1b[34m"
# define PURPLE		"\x1b[35m"
# define SKY		"\x1b[36m"
# define YEL		"\x1B[33m"

class PhoneBook
{
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkestSecret;
	int m_index;
public:
//геттеры
	PhoneBook(){}
	int getIndex()
	{
		return m_index;
	}
	std::string getFirstName()
	{
		return m_firstName;
	}
	std::string getLastName()
	{
		return m_lastName;
	}
	std::string getNickName()
	{
		return m_nickName;
	}
	std::string getPhoneNumber()
	{
		return m_phoneNumber;
	}
	std::string getDarkestSecret()
	{
		return m_darkestSecret;
	}
//сеттеры
	void setIndex(int index)
	{
		m_index = index;
	}
	void setFirstName(std::string firstName)
	{
		m_firstName = firstName;
	}
	void setLastName(std::string lastName)
	{
		m_lastName = lastName;
	}
	void setNickName(std::string nick)
	{
		m_nickName = nick;
	}
	void setPhoneNumber(std::string number)
	{
		m_phoneNumber = number;
	}
	void setDarkestSecret(std::string secret)
	{
		m_darkestSecret = secret;
	}

	void searchContact(void);
	void addContact(int index);
	void printPhoneBook(void);
};

#endif
