/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:04:03 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:11:31 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <fstream>

#define RED		"\x1b[31m"
#define GREEN	"\x1b[32m"
#define BLUE	"\x1b[34m"
#define PURPLE	"\x1b[35m"
#define SKY		"\x1b[36m"
#define YEL		"\x1B[33m"

class Contact
{
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkestSecret;
	int m_index;
public:
	Contact();
	int getIndex();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
	void setIndex(int index);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nick);
	void setPhoneNumber(std::string number);
	void setDarkestSecret(std::string secret);

	void searchContact(void);
	void addContact(int index);
	void checkIndexContact(int index);
};

#endif
