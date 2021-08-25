#include "Replace.hpp"

//int Replace::replace(std::string filename, std::string s1, std::string s2)
//{
//	std::cout << m_filename <<
//}

void Replace::replace()
{
	std::ifstream in(m_filename); //open
	std::ofstream of;//отправить вниз
	if(!m_s1.length() || !m_s2.length())
		throw(RED"Error: string is empty!");
	if(!in.is_open())
		throw(RED"Error: open file is failed!");

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
