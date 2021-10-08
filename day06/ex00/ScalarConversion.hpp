/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:07:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/08 18:43:36 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
#define SCALAR_CONVERSION_HPP

#include <iostream>
#include <cmath>

class ScalarConversion
{
private:
	std::string m_value;

public:
	ScalarConversion();
	ScalarConversion(std::string &value);
	~ScalarConversion();
	std::string getValue();

	char toChar();
	int toInteger();
	float toFloat();
	double toDouble();

	class ImpossibleExcep : public std::exception
	{
		const char *what() const throw()
		{
			return "impossible";
		}
	};

	class NotDisplayableExcep : public std::exception
	{
		const char *what() const throw()
		{
			return "Non displayable";
		}
	};

	class ErrorArgExcep : public std::exception
	{
		const char *what() const throw()
		{
			return "Error argument!";
		}
	};
};

std::ostream& operator<<(std::ostream& out, ScalarConversion& src);

#endif
