/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:49:49 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 14:49:51 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();
	Dog(const Dog &ref);
	Dog& operator=(const Dog &ref);
	~Dog();
	void makeSound() const;
};

#endif
