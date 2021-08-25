/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:18:33 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:18:34 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type){
	this->m_type = type;
}

Weapon::~Weapon(void){}

const std::string &Weapon::getType() const
{
	return m_type;
}

void Weapon::setType(std::string type)
{
	m_type = type;
}
