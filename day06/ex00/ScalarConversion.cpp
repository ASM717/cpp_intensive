/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:07:32 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/09 14:08:53 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(float value)
{
	m_value = value;
	m_char_value = 0;
}

ScalarConversion::ScalarConversion(char char_value)
{
	m_char_value = char_value;
	m_value = 0;
}

ScalarConversion::ScalarConversion(ScalarConversion const &ref)
{
	*this = ref;
}

ScalarConversion &ScalarConversion::operator=(ScalarConversion const &ref)
{
	if (this == &ref)
		return *this;
	m_value = ref.m_value;
	m_char_value = ref.m_char_value;
	return *this;
}

ScalarConversion::~ScalarConversion(){}

float ScalarConversion::getValue()
{
	return m_value;
}

char ScalarConversion::getCharValue()
{
	return m_char_value;
}

void ScalarConversion::toChar()
{
	if (getValue())
	{
		if (std::isprint(getValue()))
			std::cout << "char: " << "'" << static_cast<char>(getValue()) << "'" << std::endl;
		else if (isnan(getValue()))
			std::cout << "char: " << "impossible" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
	if (getCharValue())
	{
		if (std::isprint(getCharValue()))
			std::cout << "char: " << "'" << static_cast<char>(getCharValue()) << "'" << std::endl;
		else if (isnan(getCharValue()))
			std::cout << "char: " << "impossible" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
}

void ScalarConversion::toInteger()
{
	if (getValue())
	{
		if (isnan(getValue()) || INT_MAX < getValue() || INT_MIN > getValue())
			std::cout << "int: " << "impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(getValue()) << std::endl;
	}
	if (getCharValue())
	{
		if (isnan(getCharValue()) || INT_MAX < static_cast<int>(getCharValue()) || INT_MIN > static_cast<int>(getCharValue()))
			std::cout << "int: " << "impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(getCharValue()) << std::endl;
	}
}

void ScalarConversion::toFloat()
{
	if (getValue())
	{
		if (getValue() - static_cast<float>(getValue()) == 0.0)
			std::cout << "float: " << getValue() << ".0" << "f" << std::endl;
		else
			std::cout << "float: " << getValue() << "f" << std::endl;
	}
	if (getCharValue())
	{
		if (static_cast<int>(getCharValue()) - static_cast<float>(getCharValue()) == 0.0)
			std::cout << "float: " << static_cast<int>(getCharValue()) << ".0" << "f" << std::endl;
		else
			std::cout << "float: " << static_cast<int>(getCharValue()) << "f" << std::endl;
	}
}

void ScalarConversion::toDouble()
{
	if (getValue())
	{
		if (getValue() - static_cast<double>(getValue()) == 0.0)
			std::cout << "double: " << getValue() << ".0" << std::endl;
		else
			std::cout << "double: " << getValue() << std::endl;
	}
	if (getCharValue())
	{
		if (getCharValue() - static_cast<double>(getCharValue()) == 0.0)
			std::cout << "double: " << static_cast<int>(getCharValue()) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<int>(getCharValue()) << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, ScalarConversion& src)
{
	out << src.getValue();
	return out;
}
