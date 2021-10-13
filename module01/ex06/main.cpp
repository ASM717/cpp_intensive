/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:04:52 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/09 22:18:06 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int choose_msg(std::string message)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if(lvl[i] == message)
			return(i);
	}
	return(4);
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

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cerr << RED"Error: argument!" << std::endl;
		return (1);
	}
	std::string lvl_word = argv[1];
	lvl_word = ft_toupper_case(lvl_word);
	switch (choose_msg(lvl_word))
	{
	case (0):
		karen.complain("DEBUG");
	case (1):
		karen.complain("INFO");
	case (2):
		karen.complain("WARNING");
	case (3):
		karen.complain("ERROR");
		break;
	default:
		std::cout << RED"[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
