#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundValue : public std::exception
{
public:
	NotFoundValue() {}
	virtual ~NotFoundValue() throw() {}
	virtual const char* what() const throw()
	{
		return "Element not find!";
	}
};

template<typename T>
typename T::iterator easyfind(T &container, int index)
{
	typename T::iterator elem;
	elem = std::find(container.begin(), container.end(), index);
	if (elem == container.end())
		throw NotFoundValue();
	return (elem);
}



#endif
