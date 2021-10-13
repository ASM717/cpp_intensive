/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:54 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/13 15:04:25 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
private:
	unsigned int m_N;
public:
	Span(){}
	Span(unsigned int n);
	Span(Span const &ref);
	Span &operator=(Span const &ref);
	~Span();
}

#endif
