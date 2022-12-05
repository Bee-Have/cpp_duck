/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:10:34 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/05 17:04:17 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors :

Span::Span(unsigned int N): _size(N)
{
	if (_size != 0)
		_span = new int[_size]{0};
}

Span::Span(Span &cpy): _size(cpy._size)
{
	if (_size != 0)
	{
		_span = new int[_size]{0};
		for (int i = 0; i < _size; ++i)
			_span[i] = cpy._span[i];
	}
}

// Destructor :

Span::~Span(void)
{
	delete[] _span;
}

// Assignment operator :

Span	Span::operator=(Span &assign)
{
	if (this != &assign)
	{
		if (_size != 0)
			delete[] _span;
		_size = assign._size;
		if (_size != 0)
		{
			_span = new int[_size]{0};
			for (int i = 0; i < _size; ++i)
				_span[i] = assign._span[i];
		}
	}
	return (*this);
}

// Reference operator :

int		Span::operator[](size_t n) const
{
	std::ostringstream	ss;
	ss << "Span::operator[]: n (which is " << n
		<< ") >= _size (which is " << _size << ")";
	if (n >= _size)
		throw std::out_of_range(ss.str());
	return (_span[n]);
}

// Method :

void	Span::addRange(int min, int max)
{
	
}

void	Span::addNumber(int value)
{
	
}

int		Span::shortestSpan(void) const
{
	return (0);
}

int		Span::longestSpan(void) const
{
	return (0);
}

// Accesor :

int		Span::size(void) const
{
	return (_size);
}
