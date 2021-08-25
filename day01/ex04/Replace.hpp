#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

#define RED	"\x1b[31m"

class Replace
{
private:
	std::string m_filename;
	std::string m_s1;
	std::string m_s2;
public:
	//int replace(std::string filename, std::string s1, std::string s2);
	void replace();

	Replace();
	Replace(std::string filename, std::string s1, std::string s2);
	~Replace();
};

#endif
