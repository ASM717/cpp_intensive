/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 18:40:31 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 18:52:44 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
protected:
	std::string m_type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &ref);
	AMateria & operator=(AMateria const &ref);
	~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	// virtual void use(ICharacter& target);
};

#endif
