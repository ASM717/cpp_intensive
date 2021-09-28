/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:50:43 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 15:53:19 by amuriel          ###   ########.fr       */
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
public:
	
};

#endif
