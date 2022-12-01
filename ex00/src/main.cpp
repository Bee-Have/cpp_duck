/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:57:30 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/01 16:25:56 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int	main(void)
{
	std::cout << GB << "Tests from the 42 subject :\n";
	{
		int a = 2;
		int b = 3;
		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << YB << "Tests with type INT :\n" << END;
		std::cout << BOLD << "original int a: " << END << a << "\n";
		std::cout << BOLD << "original int b: " << END << b << "\n";

		std::cout << BOLD << "swapped a and b int values :\n";
		::swap(a, b);
		std::cout << "a = " << END << a << BOLD << ", b = " << END << b << "\n";

		std::cout << BOLD << "min(a, b) = " << END << ::min(a, b) << "\n";
		std::cout << BOLD << "max(a, b) = " << END << ::max(a, b) << "\n";

		std::cout << YB << "\nTests with type STRING :\n" << END;
		std::cout << BOLD << "original string c: " << END << c << "\n";
		std::cout << BOLD << "original string d: " << END << d << "\n";

		std::cout << BOLD << "swapped c and d string values :\n";
		::swap(c, d);
		std::cout << "c = " << END << c << BOLD << ", d = " << END << d << "\n";
		std::cout << BOLD << "min( c, d ) = " << END << ::min(c, d) << "\n";
		std::cout << BOLD << "max( c, d ) = " << END << ::max(c, d) << "\n";
	}

	std::cout << GB << "\nTests with more types :\n";
	{
		float	a = 42.0f;
		float	b = -143.10f;
		double	c = -41.4;
		double	d = 84.42;

		std::cout << YB << "Tests with type FLOAT :\n" << END;
		std::cout << BOLD << "original float a:" << END << a << "\n";
		std::cout << BOLD << "original float b:" << END << b << "\n";

		std::cout << BOLD << "swapped a and b float values :\n";
		swap(a, b);
		std::cout << "a = " << END << a << BOLD << ", b = " << END << b << "\n";

		std::cout << BOLD << "min(a, b) = " << END << min(a, b) << "\n";
		std::cout << BOLD << "max(a, b) = " << END << max(a, b) << "\n";

		std::cout << YB << "\nTests with type DOUBLE :\n" << END;
		std::cout << BOLD << "original double c:" << END << c << "\n";
		std::cout << BOLD << "original double d:" << END << d << "\n";

		std::cout << BOLD << "swapped c and d double values :\n";
		swap(a, b);
		std::cout << "c = " << END << c << BOLD << ", d = " << END << d << "\n";

		std::cout << BOLD << "min(c, d) = " << END << min(c, d) << "\n";
		std::cout << BOLD << "max(c, d) = " << END << max(c, d) << "\n";
	}
	// this will not compile because types are not the same
	{
		// int		i = 42;
		// char	c = 'b';

		// swap(i, c);
		// min(i, c);
		// max(i, c);
	}
	return (0);
}
