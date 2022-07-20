/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:23:37 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/20 16:07:50 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << "\n";
	std::cout << ++a << "\n";
	// std::cout << "a = " << a << "\n";
	// std::cout << a << "\n";
	std::cout << a << "\n";
	std::cout << a++ << "\n";
	std::cout << a << "\n";
	std::cout << b << "\n";
	std::cout << Fixed::max( a, b ) << std::endl;

	// Fixed n1(1);
    // Fixed n2(++n1);
    // Fixed n3(++ ++n1);
    // Fixed n4(n1++);
    // std::cout << "\nn1 = " << n1 << '\n'
    //           << "n2 = " << n2 << '\n'
    //           << "n3 = " << n3 << '\n'
    //           << "n4 = " << n4 << '\n';
	return 0;
}