#include "Replace.hpp"

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		Replace replace(argv[1], argv[2], argv[3]);
		try
		{
			replace.replace();
		}catch(const char *exception)
		{
			std::cerr << exception << std::endl;
		}
	}
	else
	{
		std::cerr << RED"Error: arguments!" << std::endl;
		return (1);
	}
	return (0);
}
