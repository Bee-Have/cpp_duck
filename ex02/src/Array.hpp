/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:45:40 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/01 17:22:26 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sstream>
#include <cstddef>
#include <stdexcept>
#include <string>

template<typename T>
class Array
{
	public:
	// Constructors
		Array(): _size(0), _array(NULL) {}
		Array(Array &cpy): _size(cpy._size), _array(new T[cpy._size])
		{
			for (unsigned int i = 0; i < cpy._size; ++i)
				_array[i] = cpy._array[i];
		}
		Array(unsigned int n): _size(n), _array(new T[n]{0}) {}

	// Destructor
		~Array()
		{
			if (_size != 0)
				delete[] _array;
		}

	// Copy assignment operator
		Array	&operator=(Array &assign)
		{
			if (*this != assign)
			{
				if (_size != 0)
					delete[] _array;
				_size = assign._size;
				_array = new T[assign._size];
				for (int i = 0; i < assign._size; ++i)
					_array[i] = assign._array[i];
			}
			return (*this);
		}

	// Subscript operator
		T	&operator[](size_t i)
		{
			std::ostringstream ss;
			ss << "Array::operator[]: i (which is " << i
				<< ") >= this->size() (which is " << _size << ")\n";
			if (i >= _size)
				throw std::out_of_range(ss.str());
			return (_array[i]);
		}

	// Encapsulation
		int	size() const {return (_size);}
	private:
	// Attributes
		unsigned int	_size;
		T				*_array;
};
