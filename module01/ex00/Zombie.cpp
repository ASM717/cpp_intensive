/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:16:29 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:16:30 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	m_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << getName() << " dead" <<  std::endl;
}

std::string Zombie::getName()
{
	return m_name;
}

void Zombie::setName(std::string name)
{
	m_name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << getName() << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
