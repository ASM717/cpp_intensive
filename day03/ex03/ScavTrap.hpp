/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:55:22 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/11 17:20:24 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &ref);
	ScavTrap& operator=(const ScavTrap &ref);
	virtual ~ScavTrap();
	void attack(std::string const &target);
	void guardGate();
};

#endif
