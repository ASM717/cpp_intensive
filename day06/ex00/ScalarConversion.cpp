/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:07:32 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/08 19:35:32 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(){}

ScalarConversion::ScalarConversion(std::string &value)
{
	m_value = value;
}

std::string ScalarConversion::getValue()
{
	return m_value;
}

ScalarConversion::~ScalarConversion(){}

int isDouble(std::string value)
{
	for (size_t i = 0; i < value.size(); i++)
	{
		if (!(isdigit(value[i]) && value[i] != '.'))
			return (0);
	}
	return (1);
}

int isFloat(std::string value)
{
	for (size_t i = 0; i < value.size() - 1; i++)
	{
		if (!(isdigit(value[i]) || value[i] != '.'))
			return (0);
	}
	if (value[value.size() - 1] != 'f')
		return (0);
	return (1);
}

// int isInteger(std::string value)
// {
// 	for (size_t i = 0; i < value.size(); i++)
// 	{
// 		if (!(isdigit(value[i])))
// 			return (0);
// 	}
// 	return (1);
// }

int ScalarConversion::toInteger()
{
	if(!isInteger(m_value))
		return (0);
	if(!isdigit(m_value[0]))
		return (0);
	float i_n = std::stof(m_value);
	int intNumber = static_cast<int>(i_n);
	if ((intNumber == -2147483648) || (intNumber == 2147483647) || (std::isnan(intNumber)))
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << intNumber << std::endl;
	return intNumber;
}

float ScalarConversion::toFloat()
{
	if (isFloat(m_value))
		return (0);
	float f_n = std::stof(m_value);
	float floatNumber = static_cast<float>(f_n);
	if (std::roundf(floatNumber) == floatNumber)
		std::cout << "float: " << floatNumber << ".0f" << std::endl;
	else std::cout << "float: " << floatNumber << "f" << std::endl;

	return floatNumber;
}

char ScalarConversion::toChar()
{
	if(m_value.size() != 1 || isdigit(m_value[0]) == false)
		return (0);
	float c_n = std::stof(m_value);
	char characher = static_cast<char>(c_n);
	if (c_n == std::numeric_limits<float>::infinity()
		|| c_n == -std::numeric_limits<float>::infinity()
		|| std::isnan(c_n))
		std::cout << "char: " << "impossible" << std::endl;
	else if (characher <= 32 || characher >= 127)
		std::cout << "char: " <<  "Non displayable" << std::endl;
	else if (!(std::isprint(characher)))
		std::cout << "char: " << "impossible" << std::endl;
	else
		std::cout << "char: " << "'" << characher << "'" << std::endl;
	return (characher);

}

double ScalarConversion::toDouble()
{
	if (isDouble(m_value))
		return (0);
	double d_n = std::stod(m_value);
	double doubleNumber = static_cast<double>(d_n);
	if (std::roundf(doubleNumber) == doubleNumber)
		std::cout << "double: " << doubleNumber << ".0" << std::endl;
	else std::cout << "double: " << doubleNumber << std::endl;

	return doubleNumber;
}

std::ostream& operator<<(std::ostream& out, ScalarConversion& src)
{
	out << src.getValue();
	return out;
}
