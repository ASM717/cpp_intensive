/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:24:56 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/11 10:48:59 by amuriel          ###   ########.fr       */
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
