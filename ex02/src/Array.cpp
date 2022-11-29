/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:57:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/29 17:57:12 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
template<typename T>
Array<T>::Array(void)
{
	_array = new (T);
}

template<typename T>
Array<T>::Array(Array &cpy)
{
	_array = new T(cpy.size());
	for (int i = 0; i < cpy.size(); ++i)
		_array[i] = cpy._array[i];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T(n);
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
template<typename T>
Array<T>::~Array(void)
{
	delete _array;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
template<typename T>
Array<T>	&Array<T>::operator=(Array<T> &assign)
{
	if (*this != assign)
	{
		delete _array;
		_array = new T(assign.size());
		for (int i = 0; i < assign.size(); ++i)
			_array[i] = assign[i];
	}
	return (*this);
}

/**
-----------------------------| ENCAPSULATION |----------------------------------
**/
template<typename T>
Array<T>	Array<T>::get_array(void) const
{
	return (_array);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
template<typename T>
int	Array<T>::size(void) const
{
	
	return (0);
}