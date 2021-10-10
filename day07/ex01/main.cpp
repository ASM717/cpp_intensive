#include "iter.hpp"

int main()
{
	char c_arr[] = {'A', 'M', 'U', 'R', 'I', 'E', 'L'};
	iter(c_arr, 7, print_array);
	std::cout << std::endl << std::endl;
	std::string arrs[] = {"is","studying", "in", "21", "school"};
	iter(arrs, 5, print_array);
	std::cout << std::endl << std::endl;
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(array, 10, print_array);
	std::cout << std::endl << std::endl;
	return 0;
}
