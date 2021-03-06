/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:04:42 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/26 18:48:01 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	m_level[0] = "DEBUG";
	m_level[1] = "INFO";
	m_level[2] = "WARNING";
	m_level[3] = "ERROR";
}

Karen::~Karen(){};

void Karen::debug(void)
{
	std::cout << YEL"[ DEBUG ]" << std::endl;
	std::cout << GREEN"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << GREEN"I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << YEL"[ INFO ]" << std::endl;
	std::cout << GREEN"I cannot believe adding extra bacon cost more money." << std::endl;
	std::cout << GREEN"You don’t put enough!" << std::endl;
	std::cout << GREEN"If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << YEL"[ WARNING ]" << std::endl;
	std::cout << GREEN"I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << GREEN"I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << YEL"[ ERROR ]" << std::endl;
	std::cout << GREEN"This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	typedef void (Karen::*funcP)(void);
	funcP func[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	funcP f;
	for(int i = 0; i < 4; i++)
	{
		if(m_level[i] == level)
		{
			f = func[i];
			(this->*f)();
		}
	}
}

