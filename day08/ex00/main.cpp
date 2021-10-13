#include "easyfind.hpp"

#include <vector>

int main()
{
	try
	{
		std::vector<int> vec(5, 5);
		for (int i = 0; i < 5; i++)
			vec[i] = i;
		std::vector<int>::iterator found = easyfind(vec, 2);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
