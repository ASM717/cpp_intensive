/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:46 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/13 20:29:57 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		Span sp = Span(21000);
		sp.addNumber(0);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "Error Exception: " << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(0);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch(std::exception &e)
	{
		std::cerr << "Error Exception: " << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(1);
		sp.addNumber(5);
		sp.addNumber(3);
	} catch(std::exception &e)
	{
		std::cerr << "Error Exception: " << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(1000000);
		int num;
		srand(time(0));
		for (int i = 0; i < 1000000; ++i)
		{
			num = rand() % 999999;
			sp.addNumber(num);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span sp1 = Span(1000000);
		for (int i = 1000000; i > 0; --i)
		{
			sp1.addNumber(i);
		}
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	} catch (std::exception &e)
	{
		std::cerr << "Error Exception: " << e.what() << std::endl;
	}
	return (0);
}
