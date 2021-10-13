/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:51:52 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/27 15:43:52 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string m_called_ideas[100];
public:
	Brain();
	Brain(Brain const &ref);
	Brain &operator=(Brain const &ref);
	~Brain();
	std::string const &getIdeas(int index) const;
	void setIdeas(int index, std::string ideas);
};

#endif
