/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:44:24 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/07 18:26:00 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int toInt(float val)
{
	int intNumber = static_cast<int>(val);
	if (intNumber == std::numeric_limits<float>::infinity()
	|| intNumber == -std::numeric_limits<float>::infinity()
	|| std::isnan(intNumber))
		std::cout << "impossible" << "\n";
	std::cout << intNumber << "\n";
	return intNumber;
}

char toFloat(float val)
{
	float f = static_cast<float>(val);
	std::cout << f << "\n";
	return f;
}

char toChar(float val)
{
	char str = static_cast<char>(val);

	if (str == std::numeric_limits<float>::infinity()
		|| str == -std::numeric_limits<float>::infinity()
		|| std::isnan(str))
		std::cout << "impossible" << "\n";
	if (str < 32 || str > 126)
		std::cout << "not display" << "\n";
	// std::cout << str << "\n";
	return str;
}

char toDouble(float val)
{
	double d = static_cast<double>(val);
	std::cout << d << "\n";
	return d;
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{

		std::string str = argv[1];
		//ScalarConversion conversion(str);
		//std::cout << conversion << "\n";
		float val = std::stof(str);

		toInt(val);
		std::cout << "char: ";
		toChar(val);
		toFloat(val);
		toDouble(val);

	}
	else
		std::cerr << "Error: Too much arguments!" << std::endl;
}
