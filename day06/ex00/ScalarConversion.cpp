/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:07:32 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/07 13:45:41 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScalarConversion.hpp"
#include <iostream>
#include <string>

class ScalarConversion
{
private:
	std::string const m_value;
public:
	ScalarConversion(/* args */);
	~ScalarConversion();

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
};

std::string const getValue(std::string value)
{
	return value;
}

ScalarConversion::ScalarConversion()
{
}

ScalarConversion::~ScalarConversion()
{
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: Too much arguments!" << std::endl;
		return (1);
	}
}
