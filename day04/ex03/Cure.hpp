/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:10:15 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 15:41:25 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();
	Cure(Cure const &ref);
	Cure &operator=(Cure const &ref);
	virtual ~Cure();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
