/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:16:03 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/09 16:31:27 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data *d = new Data();
	d->num = 2021;
	d->str = "School 21";
	uintptr_t ptr = serialize(d);
	std::cout << d << std::endl;
	Data *d1 = deserialize(ptr);
	std::cout << d1 << std::endl;
	std::cout << d1->num << std::endl;
	std::cout << d1->str << std::endl;
	delete d1;
	return (0);
}
