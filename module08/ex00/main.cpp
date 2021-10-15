/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:26:12 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/15 12:36:08 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
	/* Vector */
	std::vector<int> vector;
	vector.push_back(21);
	vector.push_back(42);
	vector.push_back(2142);
	std::cout << "\t*** Vector ***"<< std::endl;
	try
	{
		std::cout << "easyfind found elem: " << easyFind(vector, 21) << std::endl;
		std::cout << "Example error: " << easyFind(vector, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	/* List */
	std::list<int> list;
	list.push_back(21);
	list.push_back(42);
	list.push_back(2142);
	std::cout << "\t*** List ***"<< std::endl;
	try
	{
		std::cout << "easyfind found elem: " << easyFind(list, 42) << std::endl;
		std::cout << "Example error: " << easyFind(list, 43) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	/* Deque */
	std::deque<int> deque;
	deque.push_back(21);
	deque.push_back(42);
	deque.push_back(2142);
	std::cout << "\t*** Deque ***"<< std::endl;
	try
	{
		std::cout << "easyfind found elem: " << easyFind(deque, 2142) << std::endl;
		std::cout << "Example error: " << easyFind(deque, 2143) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
