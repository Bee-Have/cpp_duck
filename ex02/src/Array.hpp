/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:45:40 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/30 15:07:54 by amarini-         ###   ########.fr       */
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
		Array(unsigned int n): _size(n), _array(new T[n]) {}

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
				_size = assign._size;
				if (_size != 0)
					delete[] _array;
				_array = new T[assign.size()];
				for (int i = 0; i < assign.size(); ++i)
					_array[i] = assign[i];
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
