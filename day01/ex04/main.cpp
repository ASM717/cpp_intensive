#include "Replace.hpp"

void ft_bublik()
{
	//throw ("Mishanya");
	std::cout << "Mishanya" << "\n";
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		try
		{
			ft_bublik();
		}catch(const char *exception)
		{
			std::cerr << exception;
			throw ("Mishany");
		}
	}
	else
		std::cout << "Error: arguments!" << std::endl;
}
