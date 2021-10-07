/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:07:32 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/07 17:50:10 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(){}

ScalarConversion::ScalarConversion(std::string value)
{
	m_value = value;
}

std::string ScalarConversion::getValue()
{
	return m_value;
}

ScalarConversion::~ScalarConversion(){}

// void ScalarConversion::toInteger()
// {

// }

std::ostream& operator<<(std::ostream& out, ScalarConversion& src)
{
	out << src.getValue();
	return out;
}
