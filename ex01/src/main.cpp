/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:20:53 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/07 13:01:26 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int	main(void)
{
	// simple test
	std::cout << GB << "Simple tests :\n";
	{
		Span	simple(10);

		std::cout << YB << "Adding numbers repeatedly with addNumber()\n" << END;
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

		std::cout << BOLD << "Shortest span in _span variable : " << END
			<< simple.shortestSpan() << '\n';
		std::cout << BOLD << "Biggest span in _span variable : " << END
			<< simple.longestSpan() << '\n';
	}

	// addRange tests
	std::cout << GB << "\nRange tests :\n";
	{
		Span	simple_range(4);
		std::cout << YB << "Adding range : [0 - 100] to span of 4 elements :\n" << END;
		simple_range.addRange(0, 100);
		simple_range.printSpan();
		
		Span	short_range(10);
		std::cout << YB << "\nAdding range : [10 - 15] to span of 10 elements :\n" << END;
		short_range.addRange(10, 15);
		short_range.printSpan();
		
		Span	big_range(100);
		std::cout << YB << "\nAdding range : [42 - 4183] to span of 100 elements :\n" << END;
		big_range.addRange(42, 4183);
		big_range.printSpan();

		Span	no_range(15);
		std::cout << YB << "\nAdding range : [42 - 42] to span of 15 elements :\n" << END;
		no_range.addRange(42, 42);
		no_range.printSpan();
	}

	// range test
	std::cout << GB << "\nshortestSpan() longestSpan() tests :\n" << END;
	{
		std::cout << YB << "Using span with one value (80):\n" << END;
		Span	no_diff(10);
		no_diff.fill(80);
		no_diff.printSpan();
		std::cout << BOLD << "Shortest span in _span variable : " << END
			<< no_diff.shortestSpan() << '\n';
		std::cout << BOLD << "Biggest span in _span variable : " << END
			<< no_diff.longestSpan() << '\n';

		std::cout << YB << "\nUsing span with two values (1 - 100):\n" << END;
		Span	short_span(2);
		short_span.addNumber(1);
		short_span.addNumber(100);
		short_span.printSpan();
		std::cout << BOLD << "Shortest span in _span variable : " << END
			<< short_span.shortestSpan() << '\n';
		std::cout << BOLD << "Biggest span in _span variable : " << END
			<< short_span.longestSpan() << '\n';
	}

	// error tests
	std::cout << GB << "\nException tests :\n";
	{
		std::cout << YB << "addNumber() exception :\n" << END;
		Span	add_exception;
		try
		{
			add_exception.addNumber(10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << YB << "operator[] exception :\n" << END;
		Span	access_exception(3);
		try
		{
			std::cout << access_exception[4] << '\n';
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << YB << "shortestSpan() exception :\n" << END;
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
		std::cout << YB << "shortestSpan() exception :\n" << END;
		try
		{
			tiny_exception.longestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << YB << "addRange() exceptions :\n" << END;
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
