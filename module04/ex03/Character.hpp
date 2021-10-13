/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:50:43 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 10:51:06 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string m_name;
	AMateria *m_materia[4];
public:
	Character() {}
	Character(std::string const & name);
	Character(Character const & ref);
	Character& operator=(Character const & ref);
	virtual ~Character();
	std::string const & getName() const;
	AMateria const *getMateria(int idx) const;
	virtual void equip(AMateria* mater);
	virtual void unequip(int index);
	virtual void use(int index, ICharacter& target);
};

#endif
