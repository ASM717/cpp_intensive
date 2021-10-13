/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:59:05 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 11:07:06 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	Cat(const Cat &ref);
	Cat& operator=(const Cat &ref);
	virtual ~Cat();
	virtual void makeSound() const;
};

#endif
