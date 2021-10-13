/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:10:15 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 13:05:36 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#define GREEN "\x1b[32m"
#define SKY "\x1b[36m"

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
