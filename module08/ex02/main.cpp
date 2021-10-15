/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:29:05 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/15 14:28:55 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	std::cout << "*** Iterator ***" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack top: " << mstack.top() << std::endl;
	mstack.pop(); //удалить элемент из вершины стека
	std::cout << "mstack size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "mstack: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "*** Reverse Iterator ***" << std::endl;
	MutantStack<int> revmstack;
	revmstack.push(5);
	revmstack.push(17);
	std::cout << "revmstack top: " << revmstack.top() << std::endl;
	revmstack.pop(); //удалить элемент из вершины стека
	std::cout << "revmstack size: " << revmstack.size() << std::endl;
	revmstack.push(3);
	revmstack.push(5);
	revmstack.push(737);
	revmstack.push(0);
	MutantStack<int>::reverse_iterator rev_it = revmstack.rbegin();
	MutantStack<int>::reverse_iterator rev_ite = revmstack.rend();
	++rev_it;
	--rev_ite;
	while (rev_it != rev_ite)
	{
		std::cout << "revmstack: " << *rev_it << std::endl;
		++rev_it;
	}
	std::cout << "revmstack: " << *rev_it << std::endl;
	std::stack<int> rev_s(revmstack);


	std::cout << "*** Const Reverse Iterator ***" << std::endl;
	MutantStack<int> constrevmstack(revmstack);
	std::cout << "const revmstack top: " << constrevmstack.top() << std::endl;
	std::cout << "const revmstack size: " << constrevmstack.size() << std::endl;
	MutantStack<int>::const_reverse_iterator const_rev_it = constrevmstack.crbegin();
	MutantStack<int>::const_reverse_iterator const_rev_ite = constrevmstack.crend();
	++const_rev_it;
	--const_rev_ite;
	while (const_rev_it != const_rev_ite)
	{
		std::cout << "const revmstack: " << *const_rev_it << std::endl;
		++const_rev_it;
	}
	std::cout << "const revmstack: " << *const_rev_it << std::endl;
	std::stack<int> const_rev_s(constrevmstack);

	return 0;
}
