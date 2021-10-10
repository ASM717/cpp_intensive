#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int size, void((*func)(T &)))
{
	for (int i = 0; i < size; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void print_array(T &arr_elem)
{
	std::cout << arr_elem << " | ";
}

#endif
