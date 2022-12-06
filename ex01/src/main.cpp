/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:20:53 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/06 16:53:05 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	// simple test
	std::cout << "Simple tests :\n";
	{
		Span	simple(5);

		simple.addNumber(4183);
		simple.addNumber(4);
		simple.addNumber(10);
		simple.addNumber(-42);
		simple.addNumber(1032);

		simple.printSpan();

		simple.shortestSpan();
		simple.longestSpan();
	}

	// addRange tests
	std::cout << "Range tests :\n";
	{
		Span	simple_range(4);
		simple_range.addRange(0, 100);
		simple_range.printSpan();
		
		Span	short_range(10);
		short_range.addRange(10, 15);
		short_range.printSpan();
		
		Span	big_range(1000);
		big_range.addRange(42, 4183);
		big_range.printSpan();

		Span	no_range(15);
		no_range.addRange(42, 42);
		no_range.printSpan();
	}

	// range test
	std::cout << "shortestSpan() longestSpan() tests :\n";
	{
		Span	no_diff(10);
		no_diff.fill(80);
		no_diff.printSpan();
		no_diff.shortestSpan();
		no_diff.longestSpan();

		Span	short_span(2);
		short_span.addNumber(1);
		short_span.addNumber(100);
		short_span.shortestSpan();
		short_span.longestSpan();
	}

	// error tests
	std::cout << "Exception tests :\n";
	{
		Span	add_exception;
		try
		{
			add_exception.addNumber(10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		Span	access_exception(3);
		try
		{
			std::cout << access_exception[4] << '\n';
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		Span	tiny_exception(1000);

		tiny_exception.addNumber(9);
		try
		{
			tiny_exception.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			tiny_exception.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		Span	range_exception(2);

		range_exception.addNumber(19);
		range_exception.addNumber(2);
		try
		{
			range_exception.addRange(11, 154);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
