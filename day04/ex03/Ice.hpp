/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:59:20 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/29 13:58:57 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
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
