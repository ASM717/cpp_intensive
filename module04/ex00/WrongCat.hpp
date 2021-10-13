/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 12:21:26 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 16:29:13 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	WrongCat(const WrongCat &ref);
	WrongCat& operator=(const WrongCat &ref);
	virtual ~WrongCat();
	void makeSound() const;
};

#endif
