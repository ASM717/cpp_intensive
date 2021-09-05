/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:49 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/05 10:50:09 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* m_brain;
public:
	Dog();
	Dog(const Dog &ref);
	Dog& operator=(const Dog &ref);
	~Dog();
	void makeSound() const;
};

#endif
