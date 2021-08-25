/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:18:39 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:18:43 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string m_type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon(void);
	const std::string &getType() const;
	void setType(std::string type);

};

#endif
