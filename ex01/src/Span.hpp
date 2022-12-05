/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:53:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/05 16:08:17 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>

class Span
{
	public:
	// Constructors
		Span();
		Span(unsigned int N);
		Span(Span &cpy);
	// Destructor
		~Span();
	// Assignment operator
		Span	operator=(Span &assign);
	// Reference operator
		int		operator[](size_t n) const;
	// Method
		void	addRange(int min, int max);
		void	addNumber(int value);
		int		shortestSpan() const;
		int		longestSpan() const;
	// Accesor
		int		size() const;

	private:
		unsigned int	_size;
		int				_span;
};
