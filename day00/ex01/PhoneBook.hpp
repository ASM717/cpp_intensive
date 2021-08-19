#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define ARR 8
#include <iostream>

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
public:
	void searchContact(void);
	void addContact(void);
};

#endif
