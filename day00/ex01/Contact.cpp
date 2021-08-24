#include "Contact.hpp"

void Contact::addContact(int index)
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

void Contact::checkIndexContact(int index)
{
	std::cout << YEL"First Name: " + m_firstName << std::endl;
	std::cout << YEL"Last Name: " + m_lastName << std::endl;
	std::cout << YEL"Nickname: " + m_nickName << std::endl;
	std::cout << YEL"Phone Number: " + m_phoneNumber << std::endl;
	std::cout << YEL"Darkest Secret: " + m_darkestSecret << std::endl;
}

void Contact::searchContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	if(m_firstName.size() > 10)
	{
		firstName = m_firstName.substr(0, 9);
		firstName.insert(9, ".");
	} else firstName = m_firstName;
	if(m_lastName.size() > 10)
	{
		lastName = m_lastName.substr(0, 9);
		lastName.insert(9, ".");
	} else lastName = m_lastName;
	if(m_nickName.size() > 10)
	{
		nickName = m_nickName.substr(0, 9);
		nickName.insert(9, ".");
	} else nickName = m_nickName;
	std::cout << GREEN "|" << std::setw(10) << getIndex() << "|" << std::setw
	(10) << firstName << "|" << std::setw(10) << lastName << "|" <<
	std::setw(10) << nickName << "|" << std::endl;
}

int Contact::getIndex()
{
	return m_index;
}
std::string Contact::getFirstName()
{
	return m_firstName;
}
std::string Contact::getLastName()
{
	return m_lastName;
}
std::string Contact::getNickName()
{
	return m_nickName;
}
std::string Contact::getPhoneNumber()
{
	return m_phoneNumber;
}
std::string Contact::getDarkestSecret()
{
	return m_darkestSecret;
}
void Contact::setIndex(int index)
{
	m_index = index;
}
void Contact::setFirstName(std::string firstName)
{
	m_firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
	m_lastName = lastName;
}
void Contact::setNickName(std::string nick)
{
	m_nickName = nick;
}
void Contact::setPhoneNumber(std::string number)
{
	m_phoneNumber = number;
}
void Contact::setDarkestSecret(std::string secret)
{
	m_darkestSecret = secret;
}