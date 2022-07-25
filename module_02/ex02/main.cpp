/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:23:37 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/25 16:10:35 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	std::cout << "42 Mandatory tests :\n";
	{
		Fixed	a;
		Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "a         = " << a << "\n";
		std::cout << "b         = " << b << "\n\n";

		std::cout << "a         = " << a << "\n";
		std::cout << "++a       = " << ++a << "\n";
		std::cout << "a         = " << a << "\n";
		std::cout << "a++       = " << a++ << "\n";
		std::cout << "a         = " << a << "\n";

		std::cout << "b         = " << b << "\n";

		std::cout << "max(a, b) = " << Fixed::max(a, b) << "\n";
	}
	std::cout << "\nFurther tests :\n";
	{
		Fixed	a;
		Fixed	b(3);
		Fixed	c(Fixed(4) * Fixed(2));
		Fixed	d(5.05f);

		std::cout << "a         = " << a << "\n";
		std::cout << "b         = " << b << "\n";
		std::cout << "c         = " << c << "\n";
		std::cout << "d         = " << d << "\n\n";

		std::cout << "a + b     = " << a + b << "\n";
		std::cout << "b - d     = " << b - d << "\n";
		std::cout << "c         = " << c << "\n";
		std::cout << "d         = " << d << "\n";
		std::cout << "d * 2     = " << d * 2 << "\n";
		std::cout << "d / 2     = " << d / 2 << "\n";
		std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
	}
	return 0;
}