/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:53:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/07 12:29:46 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

class Span
{
	public:
	// Constructors
		Span(unsigned int N = 0);
		Span(Span &cpy);
	// Destructor
		~Span();
	// Assignment operator
		Span	operator=(Span &assign);
	// Reference operator
		int		operator[](size_t n) const;
	// Method
		void	fill(int value);
		void	addRange(int min, int max);
		void	addNumber(int value);
		int		shortestSpan() const;
		int		longestSpan() const;
	// Accesor
		int		size() const;
		void	printSpan(void) const;

	private:
		unsigned int	_size;
		unsigned int	_pos_max;
		int				*_span;
};
