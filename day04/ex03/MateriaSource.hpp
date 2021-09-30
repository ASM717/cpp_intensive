/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:31:20 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/30 13:09:31 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#define RED "\x1b[31m"
#define YEL "\x1B[33m"

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *m_materia_src[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &ref);
	MateriaSource &operator=(MateriaSource const &ref);
	AMateria *getMateria(int index) const;
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria *mater);
	virtual AMateria *createMateria(std::string const &type_mat);
};

#endif
