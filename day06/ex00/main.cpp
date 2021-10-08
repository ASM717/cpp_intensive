/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:44:24 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/08 19:26:43 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"


int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		std::string arg = argv[1];
		std::cout << arg << "\n";
		ScalarConversion conversion(arg);
		if (conversion.toChar())
		{

		}
		if (conversion.toInteger())
		{
			/* code */
		}
		if (conversion.toFloat())
		{
			/* code */
		}
		if (conversion.toDouble())
		{
			/* code */
		}
		else
			std::cerr << "CHMO BOLOTNOE !" << std::endl;
	}
	else
		std::cerr << "Error: Too much arguments!" << std::endl;
}
