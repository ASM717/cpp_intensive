/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:20 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/07 13:15:32 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string m_type);
	Animal(const Animal &ref);
	Animal& operator=(const Animal &ref);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};

#endif
