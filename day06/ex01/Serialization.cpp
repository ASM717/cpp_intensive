/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <amuriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:16:03 by amuriel           #+#    #+#             */
/*   Updated: 2021/10/09 14:28:42 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	int *ptr_param = new int;

	*ptr_param = ptr->n;
	return reinterpret_cast<uintptr_t>(ptr_param);
}

Data* deserialize(uintptr_t raw)
{
	Data *new_data = new Data;

	new_data->n = *(reinterpret_cast<int *>(raw));
	return new_data;
}

int main()
{
	Data *ptr = new Data;
	ptr->n = 10;
	uintptr_t raw;
	Data *data;
	raw = serialize(ptr);
	data = deserialize(raw);
	std::cout << "ptr->n = " << ptr->n << std::endl;
	std::cout << "data->n = " << data->n << std::endl;

	delete ptr;
	delete reinterpret_cast<int *>(raw);
	delete data;
}
