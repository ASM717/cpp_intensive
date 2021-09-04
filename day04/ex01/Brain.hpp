/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:51:52 by amuriel           #+#    #+#             */
/*   Updated: 2021/09/04 15:15:41 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string called_ideas[100];
public:
	Brain();
	Brain(Brain const &ref);
	Brain &operator=(Brain const &ref);
	~Brain();
};

#endif
