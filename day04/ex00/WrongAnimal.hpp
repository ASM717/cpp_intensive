/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:26:41 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 12:36:21 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string m_type);
	WrongAnimal(const WrongAnimal &ref);
	WrongAnimal& operator=(const WrongAnimal &ref);
	~WrongAnimal();
	std::string getType() const;
	void makeSound() const;
};

#endif
