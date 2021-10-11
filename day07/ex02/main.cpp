#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> array(10);
	std::cout << "integer array: ";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		array[i] = i;
		std::cout << array[i] << " ";
	}
	unsigned int arr_size = array.size();
	std::cout << "\t\tarray size = " << arr_size << std::endl;

	Array<int> cpy_arr(array);
	std::cout << "integer copy_array: ";
	for (unsigned int i = 0; i < cpy_arr.size(); i++)
	{
		cpy_arr[i] = i;
		std::cout << cpy_arr[i] << " ";
	}
	unsigned int arr_size_cpy = cpy_arr.size();
	std::cout << "\tcpy_array size = " << arr_size_cpy << std::endl;

	Array<char> arr_char(10);
	std::cout << "char array: ";
	for (unsigned int i = 0; i < arr_char.size(); i++)
	{
		arr_char[i] = 'a' + i;
		std::cout << arr_char[i] << " ";
	}
	unsigned int char_arr_size = arr_char.size();
	std::cout << "\t\tchar_array size = " << char_arr_size << std::endl;

	//проверка на пустоту

	try
	{
		Array<unsigned int> test(100);
		test[100];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	system("leaks array");
	return (0);
}


// #define MAX_VAL 750
// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;
// 	system ("leaks array");
// 	return 0;
// }
