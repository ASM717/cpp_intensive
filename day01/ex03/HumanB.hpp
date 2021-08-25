/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:18:24 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:18:25 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string m_name;
	Weapon *m_weapon;
public:
	HumanB();
	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(Weapon &weapon);
	void attack(void) const;
};

#endif
