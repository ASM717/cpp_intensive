/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:44:24 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/13 20:29:45 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		std::string arg = argv[1];
		if (arg.size() == 0)
		{
			std::cerr << "Error: String is empty!" << std::endl;
			return (1);
		}
		try
		{
			if ((arg[0] < 48 || arg[0] > 57) && arg.size() == 1)
			{
				ScalarConversion conversion(arg[0]);
				conversion.toChar();
				conversion.toInteger();
				conversion.toFloat();
				conversion.toDouble();
			}
			else
			{
				float f_num = std::stof(arg);
				ScalarConversion conversion(f_num);
				conversion.toChar();
				conversion.toInteger();
				conversion.toFloat();
				conversion.toDouble();
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
	{
		std::cerr << "Error: You must enter one argument!" << std::endl;
		return (1);
	}
	return (0);
}
