/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:29:28 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/15 13:35:13 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack() : std::stack<T>(){}
	MutantStack(MutantStack const &ref) : std::stack<T>(ref){}
	MutantStack& operator = (MutantStack const &ref)
	{
		if (this == &ref)
			return *this;
		std::stack<T>::operator=(ref);
		return *this;
	}
	virtual ~MutantStack(){}

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}
	iterator end()
	{
		return std::stack<T>::c.end();
	}
	const_iterator cbegin() const
	{
		return std::stack<T>::c.cbegin();
	}
	const_iterator cend() const
	{
		return std::stack<T>::c.cend();
	}
	reverse_iterator rbegin()
	{
		return std::stack<T>::c.rbegin();
	}
	reverse_iterator rend()
	{
		return std::stack<T>::c.rend();
	}
	const_reverse_iterator crbegin() const
	{
		return std::stack<T>::c.crbegin();
	}
	const_reverse_iterator crend() const
	{
		return std::stack<T>::c.crend();
	}
};

#endif
