/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:50:00 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/14 14:29:51 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n)
{
	m_N = n;
}

Span::Span(Span const &ref)
{
	*this = ref;
}

Span &Span::operator=(Span const &ref)
{
	m_N = ref.m_N;
	m_vector.clear();
	m_vector = ref.m_vector;
	return *this;
}

Span::~Span()
{
	m_vector.clear();
}

void Span::addNumber(int number)
{
	if (m_vector.size() == m_N)
		throw FullVectorException();
	m_vector.push_back(number);
}

int Span::shortestSpan()
{
	if(m_vector.empty())
		throw EmptyVectorException();
	if (m_vector.size() == 1)
		throw AloneElementException();
	std::vector<int> tmp_v = m_vector;
	std::sort(tmp_v.begin(), tmp_v.end());
	std::vector<int>::iterator prev = tmp_v.begin();
	std::vector<int>::iterator next = ++tmp_v.begin();
	int min = *next - *prev;
	while (next != tmp_v.end())
	{
		if (*next - *prev < min)
		min = *next - *prev;
		prev = next;
		next++;
	}
	return min;
}

int Span::longestSpan()
{
	if(m_vector.empty())
		throw EmptyVectorException();
	if (m_vector.size() == 1)
		throw AloneElementException();
	std::vector<int> tmp_v = m_vector;
	std::sort(tmp_v.begin(), tmp_v.end());
	int max = tmp_v.back() - tmp_v.front();
	return (max);
}
