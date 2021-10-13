/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:26:07 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/13 13:49:15 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundValue : public std::exception
{
public:
	NotFoundValue() {}
	virtual ~NotFoundValue() throw() {}
	virtual const char* what() const throw()
	{
		return "Element has not found!";
	}
};

template<typename T>
int easyfind(T &container, int index)
{
	typename T::iterator elem;
	elem = std::find(container.begin(), container.end(), index);
	if (elem == container.end())
		throw NotFoundValue();
	return (*elem);
}



#endif
