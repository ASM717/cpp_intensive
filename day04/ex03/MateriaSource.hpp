/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:31:20 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/28 16:00:42 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *m_materia[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &ref);
	MateriaSource &operator=(MateriaSource const &ref);
	AMateria *getMateria(int count) const;
	~MateriaSource();

	void learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);
};

#endif
