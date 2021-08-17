//#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

class PhoneBook
{
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickName;
	std::string m_phoneNumber;
	std::string m_darkestSecret;
public:
	PhoneBook()
	{
		m_firstName = "NULL";
		m_lastName = "NULL";
		m_nickName = "NULL";
		m_phoneNumber = "NULL";
		m_darkestSecret = "NULL";
		std::cout << "BBBB\n";
		std::cout << m_firstName << " / " << m_lastName << " / " <<
		m_nickName << " / " << m_phoneNumber << " / " << m_darkestSecret <<
		std::endl;
	}

	PhoneBook(std::string firstName, std::string lastName,
			  std::string
	nickName, std::string
	phoneNumber, std::string darkestSecret = "Stroka")
	{
		m_firstName = firstName;
		m_lastName = lastName;
		m_nickName = nickName;
		m_phoneNumber = phoneNumber;
		m_darkestSecret = darkestSecret;
		std::cout << "AAAAA\n";
		std::cout << m_firstName << " / " << m_lastName << " / " <<
		m_nickName << " / " << m_phoneNumber << " / " << m_darkestSecret <<
		std::endl;
	}
};

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "ru");
	PhoneBook phoneBook("Stepan", "Baratrum", "Demon", "9999999");
	PhoneBook phoneBook1;

//	phoneBook.PhoneBook("Stepan", "Baratrum", "Demon", "9999999",
//								  "1111111");
//	phoneBook.m_firstName = "Григорий";
//	phoneBook.m_lastName = "Cтепанян";

	return (0);
}