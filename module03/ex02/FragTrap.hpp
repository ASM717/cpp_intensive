/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:35:08 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/22 16:50:41 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &ref);
	FragTrap& operator=(const FragTrap &ref);
	virtual ~FragTrap();
	void highFivesGuys(void);
	virtual void attack(std::string const & target);
};

#endif
