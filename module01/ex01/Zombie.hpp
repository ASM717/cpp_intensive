/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:17:04 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:17:05 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	std::string getName();
	void setName(std::string name);
	void announce(void);
};
Zombie	*zombieHorde(int N, std::string name);
#endif
