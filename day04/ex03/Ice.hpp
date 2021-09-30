/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:59:20 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 13:05:28 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#define GREEN "\x1b[32m"
#define SKY "\x1b[36m"

#include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();
	Ice(Ice const &ref);
	Ice &operator=(Ice const &ref);
	virtual ~Ice();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};
#endif
