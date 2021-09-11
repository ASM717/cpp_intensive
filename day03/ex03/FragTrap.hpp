/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 12:55:06 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/11 17:20:15 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &ref);
	FragTrap& operator=(const FragTrap &ref);
	virtual ~FragTrap();
	void highFivesGuys(void);
	void attack(std::string const & target);
};

#endif
