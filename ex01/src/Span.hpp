/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:53:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/06 13:20:29 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sstream>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <limits>

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

	private:
		unsigned int	_size;
		int				_pos_max;
		int				*_span;
};
