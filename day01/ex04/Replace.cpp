#include "Replace.hpp"

//int Replace::replace(std::string filename, std::string s1, std::string s2)
//{
//	std::cout << m_filename <<
//}

static std::string ft_toupper_case(std::string str)
{
	std::string string;
	int i;
	for (i = 0; i < str.length(); i++)
	{
		string += std::toupper(str[i]);
	}
	return(string);
}

void Replace::replace()
{
	std::ifstream in(m_filename); //open
	std::ofstream of;//отправить вниз
	if(!m_s1.length() || !m_s2.length())
		throw(RED"Error: string is empty!");
	if(!in.is_open())
		throw(RED"Error: open file is failed!");
	// if(in.peek() == EOF)
	// 	throw(RED"Error: file is empty!");
	std::string format = ".replace";
	m_filename = ft_toupper_case(m_filename);
	m_filename = m_filename + format;


	std::cout << m_filename << std::endl;
	std::cout << m_s1 << std::endl;
	std::cout << m_s2 << std::endl;
}

Replace::Replace()
{}

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	m_filename = filename;
	m_s1 = s1;
	m_s2 = s2;
}

Replace::~Replace()
{}
