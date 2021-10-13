/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:54 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/13 20:02:24 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <ctime>

class Span
{
private:
	unsigned int m_N;
	std::vector<int> m_vector;
public:
	Span(){}
	Span(unsigned int n);
	Span(Span const &ref);
	Span &operator=(Span const &ref);
	~Span();

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

	class FullVectorException : public std::exception
	{
	public:
		FullVectorException() {}
		virtual ~FullVectorException() throw() {}
		virtual const char* what() const throw()
		{
			return "Vector is full";
		}
	};

	class EmptyVectorException : public std::exception
	{
	public:
		EmptyVectorException() {}
		virtual ~EmptyVectorException() throw() {}
		virtual const char* what() const throw()
		{
			return "Vector is empty";
		}
	};

	class AloneElementException : public std::exception
	{
	public:
		AloneElementException() {}
		virtual ~AloneElementException() throw() {}
		virtual const char* what() const throw()
		{
			return "Vector contains one element";
		}
	};
};

#endif
