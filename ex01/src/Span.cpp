/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:10:34 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/06 13:20:36 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors :

Span::Span(unsigned int N): _size(N), _pos_max(0)
{
	if (_size != 0)
		_span = new int[_size]{0};
}

Span::Span(Span &cpy): _size(cpy._size), _pos_max(0)
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

void	Span::fill(int value)
{
	for (int i = 0; i < _size; ++i)
		_span[i] = value;
}

void	Span::addRange(int min, int max)
{
	
}

void	Span::addNumber(int value)
{
	std::ostringstream	ss;

	ss << "Span::addNumber: adding value (which is " << value
		<< ") would exceed _size (which is " << _size << ")";
	if (_pos_max == _size)
		throw std::length_error(ss.str());

	if (_pos_max > 0)
	{
		for (int i = _pos_max + 1; i >= 0; --i)
			_span[i] = _span[i - 1];
	}
	++_pos_max;
}

int		Span::shortestSpan(void) const
{
	int	shortest = std::numeric_limits<int>::max();
	std::ostringstream	ss;

	ss << "Span::shortestSpan: number of element in _span (which is "
		<< _pos_max << ") is unsufficient";
	if (_pos_max < 2)
		throw std::length_error(ss.str());

	for (int i = 0; i < _size; ++i)
		for (int j = 0; j < _size; ++j)
			if (i != j
				&& (((i - j) > 0 && (i - j) < shortest)
				|| (j - i) > 0 && (j - i) < shortest))
			{
				if ((i - j) > 0)
					shortest = (i - j);
				else
					shortest = (j - i);
			}
	return (shortest);
}

int		Span::longestSpan(void) const
{
	int	longest = 0;
	std::ostringstream	ss;

	ss << "Span::longestSpan: number of element in _span (which is "
		<< _pos_max << ") is unsufficient";
	if (_pos_max < 2)
		throw std::length_error(ss.str());

	for (int i = 0; i < _size; ++i)
		for (int j = 0; j < _size; ++j)
			if (i != j && ((i - j) > longest || (j - i) > longest))
			{
				if ((i - j) > 0)
					longest = (i - j);
				else
					longest = (j - i);
			}
	return (longest);
}

// Accesor :

int		Span::size(void) const
{
	return (_size);
}
