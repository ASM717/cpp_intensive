/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IdentifyRealType.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:42:26 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/09 15:31:00 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int num = rand() % 3;
	if (num == 0)
		return new A();
	else if (num == 1)
		return new B();
	else
		return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else std::cerr << "Not identify!" << std::endl;
}

void identify(Base &p)
{
	bool flag = false;
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
		flag = true;
	}
	catch (std::exception & e){}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
		flag = true;
	}
	catch (std::exception & e){}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
		flag = true;
	}
	catch (std::exception &e){}
	if (flag == false)
		std::cout << "Not identify!" << std::endl;
}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	//system("leaks realtype");
	return 0;
}
