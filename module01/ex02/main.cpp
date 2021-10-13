/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:17:23 by amuriel           #+#    #+#             */
/*   Updated: 2021/08/25 16:17:24 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str; //указатель на строку
	std::string &stringREF = str; //ссылка на строку

	std::cout << *stringPTR << std::endl; //печатаю разименованнный указатель
	std::cout << stringREF << std::endl; //печатаю строку по ссылке

	std::cout << stringPTR << std::endl; //указатель на адрес памяти
	std::cout << &stringREF << std::endl; //указатель на ссылку области памяти
}
