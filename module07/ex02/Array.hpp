#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
private:
	T *m_arr;
	unsigned int m_n;

public:
	Array()
	{
		m_arr = NULL;
		m_n = 0;
	}
	Array(unsigned int n)
	{
		m_arr = NULL;
		m_n = 0;
		try
		{
			if (n == 0)
			{
				throw ("Not Allocated Memory!");
			}
			m_arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
			{
				m_arr[i] = 0;
			}
			m_n = n;
		}
		catch(const char *e)
		{
			std::cerr << e << std::endl;
		}
	}
	Array(Array const &ref)
	{
		m_arr = NULL;
		m_n = 0;
		*this = ref;
	}
	Array &operator=(Array const &ref)
	{
		if (this != &ref)
		{
			if (m_arr != NULL && m_n != 0)
				delete[] m_arr;
			if (ref.m_n)
			{
				m_arr = new T[ref.m_n];
				for (unsigned int i = 0; i < ref.m_n; i++)
				{
					m_arr[i] = ref.m_arr[i];
				}
			}
			else
				m_arr = 0;
			m_n = ref.m_n;
		}
		return *this;
	}
	~Array()
	{
		if (m_n)
			delete [] m_arr;
	}

	T &operator [] (unsigned int index)
	{
		if (index >= m_n || index < 0)
			throw SegFaultExecption();
		return m_arr[index];
	}

	unsigned int size()
	{
		return m_n;
	}

	class SegFaultExecption : public std::exception
	{
	public:
		SegFaultExecption() {}
		virtual ~SegFaultExecption() throw() {}
		virtual const char* what() const throw()
		{
			return "Seg Fault Exception!";
		}
	};
};

#endif
