/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:04:52 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/26 17:51:15 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

enum Levels
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

int main(int argc, char **argv)
{
	Karen karen;
	Levels levels;
	if (argc != 2)
	{
		std::cerr << "Error: argument!" << std::endl;
		return (1);
	}
	std::string lvl_word = argv[1];

	
	//std::cout << lvl_word << std::endl;

	switch (levels)
	{
	case DEBUG:
		karen.complain("DEBUG");
		break;
	case INFO:
		karen.complain("INFO");
		break;
	case WARNING:
		karen.complain("WARNING");
		break;
	case ERROR:
		karen.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
