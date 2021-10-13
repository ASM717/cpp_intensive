/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:18:06 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:18:07 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string m_name;
	Weapon *m_weapon;
public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void) const;
};

#endif
