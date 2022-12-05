/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:53:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/05 16:00:00 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	// Method
		void	addRange(int min, int max);
		void	addNumber(int value);
		int		shortestSpan() const;
		int		longestSpan() const;

	private:
		unsigned int	_size;
};
