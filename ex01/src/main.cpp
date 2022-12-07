/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:20:53 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/07 12:52:50 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	// simple test
	std::cout << "Simple tests :\n";
	{
		Span	simple(10);

		std::cout << "Adding numbers repeatedly with addNumber()\n";
		simple.addNumber(1);
		simple.addNumber(2);
		simple.addNumber(3);
		simple.addNumber(4);
		simple.addNumber(5);
		simple.addNumber(6);
		simple.addNumber(7);
		simple.addNumber(8);
		simple.addNumber(9);
		simple.addNumber(10);

		simple.printSpan();

		std::cout << "Shortest span in _span variable : " << simple.shortestSpan() << '\n';
		std::cout << "Biggest span in _span variable : " << simple.longestSpan() << '\n';
	}

	// addRange tests
	std::cout << "\nRange tests :\n";
	{
		Span	simple_range(4);
		std::cout << "Adding range : [0 - 100] to span of 4 elements :\n";
		simple_range.addRange(0, 100);
		simple_range.printSpan();
		
		Span	short_range(10);
		std::cout << "\nAdding range : [10 - 15] to span of 10 elements :\n";
		short_range.addRange(10, 15);
		short_range.printSpan();
		
		Span	big_range(100);
		std::cout << "\nAdding range : [42 - 4183] to span of 100 elements :\n";
		big_range.addRange(42, 4183);
		big_range.printSpan();

		Span	no_range(15);
		std::cout << "\nAdding range : [42 - 42] to span of 15 elements :\n";
		no_range.addRange(42, 42);
		no_range.printSpan();
	}

	// range test
	std::cout << "\nshortestSpan() longestSpan() tests :\n";
	{
		Span	no_diff(10);
		no_diff.fill(80);
		no_diff.printSpan();
		std::cout << "Shortest span in _span variable : " << no_diff.shortestSpan() << '\n';
		std::cout << "Biggest span in _span variable : " << no_diff.longestSpan() << '\n';

		Span	short_span(2);
		short_span.addNumber(1);
		short_span.addNumber(100);
		short_span.printSpan();
		std::cout << "Shortest span in _span variable : " << short_span.shortestSpan() << '\n';
		std::cout << "Biggest span in _span variable : " << short_span.longestSpan() << '\n';
	}

	// error tests
	std::cout << "\nException tests :\n";
	{
		std::cout << "addNumber() exception :\n";
		Span	add_exception;
		try
		{
			add_exception.addNumber(10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << "operator[] exception :\n";
		Span	access_exception(3);
		try
		{
			std::cout << access_exception[4] << '\n';
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << "shortestSpan() exception :\n";
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
		std::cout << "shortestSpan() exception :\n";
		try
		{
			tiny_exception.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << "addRange() exceptions :\n";
		Span	range_lenth_exception(2);
		Span	range_argument_exception(10);
		range_lenth_exception.addNumber(19);
		range_lenth_exception.addNumber(2);
		try
		{
			range_lenth_exception.addRange(11, 154);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			range_argument_exception.addRange(123, 1);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
