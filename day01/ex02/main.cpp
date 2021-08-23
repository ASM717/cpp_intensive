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