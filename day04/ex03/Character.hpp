/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:50:43 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 18:31:53 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <ICharacter.hpp>

class Character : public ICharacter
{
private:
	std::string m_name;
	AMateria *m_materia[4];
	Character() {}; //????
public:
	Character(std::string const & name);
	Character(Character const & copy);
	Character& operator=(Character const & copy);
	virtual ~Character();
	std::string const & getName() const;
};

#endif
