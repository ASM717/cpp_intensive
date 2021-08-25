/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:22:06 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 21:19:09 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

static std::string ft_sed(const std::string s1, const std::string s2, std::string buf)
{
	//npos - несуществующая позиция return (size_t)
	for(size_t pos = 0; pos != std::string::npos;)
	{
		pos = buf.find(s1, pos);
		if(pos != std::string::npos)
		{
			buf.erase(pos, s1.length());
			buf.insert(pos, s2);
			pos++;
		}
	}
	return (buf);
	// надо доразобраться с выводом, не разделяются строки
}

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
	if(!m_s1.length() || !m_s2.length() || !m_filename.length())
		throw(RED"Error: string is empty!");
	if(!in.is_open())
		throw(RED"Error: open file is failed!");
	std::string format = ".replace";
	m_filename = ft_toupper_case(m_filename);
	m_filename = m_filename + format;
	std::ofstream of(m_filename); //new open
	std::string buf;
	while (getline(in, buf))
	{
		of << ft_sed(m_s1, m_s2, buf);
		if (of.eof())
			of << std::endl;
	}
	in.close();
	of.close();
}

Replace::Replace(){}

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	m_filename = filename;
	m_s1 = s1;
	m_s2 = s2;
}

Replace::~Replace(){}
