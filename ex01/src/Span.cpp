/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:10:34 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/07 18:10:33 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors :

Span::Span(unsigned int N): _size(N), _pos_max(0)
{
	if (_size != 0)
	{
		_span = new int[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_span[i] = 0;
	}
}

// Copy constructor
Span::Span(Span &cpy): _size(cpy._size), _pos_max(0)
{
	if (_size != 0)
	{
		_span = new int[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_span[i] = cpy._span[i];
	}
}

// Copy constructor with different cpy type variable
Span::Span(Span const &cpy): _size(cpy._size), _pos_max(0)
{
	if (_size != 0)
	{
		_span = new int[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_span[i] = cpy._span[i];
	}
}

// Destructor :

Span::~Span(void)
{
	if (_size > 0)
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
			_span = new int[_size];
			for (unsigned int i = 0; i < _size; ++i)
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
	for (; _pos_max < _size; ++_pos_max)
		_span[_pos_max] = value;
}

	void	Span::addRange(int min, int max)
{
	static bool	seeded(false);
	std::ostringstream	length;
	std::ostringstream	argument;

	length << "Span::addRange: adding value (which is rand()) would exceed _size (which is "
		<< _size << ")";
	argument << "Span::addRange: min (which i " << min << ") > max (which is " << max << ")";
	if (_pos_max == _size)
		throw std::length_error(length.str());
	if (min > max)
		throw std::invalid_argument(argument.str());

	if (min == max)
		return (fill(min));
	if (seeded == false)
	{
		std::srand(std::time(NULL));
		seeded = true;
	}
	for (;_pos_max < _size ; ++_pos_max)
		_span[_pos_max] = rand() % max + min;
}

void	Span::addNumber(int value)
{
	std::ostringstream	ss;

	ss << "Span::addNumber: adding value (which is " << value
		<< ") would exceed _size (which is " << _size << ")";
	if (_pos_max == _size)
		throw std::length_error(ss.str());

	_span[_pos_max] = value;
	++_pos_max;
}

int		Span::shortestSpan(void) const
{
	int					shortest;
	int					*cpy;
	std::ostringstream	ss;

	ss << "Span::shortestSpan: number of element in _span (which is "
		<< _pos_max << ") is unsufficient";
	if (_pos_max < 2)
		throw std::length_error(ss.str());

	cpy = new int[_pos_max];
	for (unsigned int i = 0; i < _pos_max; ++i)
		cpy[i] = _span[i];
	std::sort(cpy, cpy + _pos_max);
	shortest = cpy[1] - cpy[0];

	delete[] cpy;
	return (shortest);
}

int		Span::longestSpan(void) const
{
	int					longest;
	int					*cpy;
	std::ostringstream	ss;

	ss << "Span::longestSpan: number of element in _span (which is "
		<< _pos_max << ") is unsufficient";
	if (_pos_max < 2)
		throw std::length_error(ss.str());

	cpy = new int[_pos_max];
	for (unsigned int i = 0; i < _pos_max; ++i)
		cpy[i] = _span[i];

	std::sort(cpy, cpy + _pos_max);
	longest = cpy[_pos_max - 1] - cpy[0];
	
	delete[] cpy;
	return (longest);
}

// Accesor :

int		Span::size(void) const
{
	return (_size);
}

void	Span::printSpan(void) const
{
	for (unsigned int i = 0; i < _pos_max; ++i)
		std::cout << '[' << _span[i] << ']';
	std::cout << std::endl;
}
