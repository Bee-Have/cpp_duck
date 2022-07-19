/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:33:22 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/19 13:15:06 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << '\n' << a.getRawBits() << '\n';
	std::cout << b.getRawBits() << '\n';
	std::cout << c.getRawBits() << '\n';

	a.setRawBits(6);
	b.setRawBits(42);
	c.setRawBits(11);

	std::cout << "\na = " << a.getRawBits() << '\n';
	std::cout << "b = " << b.getRawBits() << '\n';
	std::cout << "c = " << c.getRawBits() << '\n';

	a = b;
	b = c;
	c.setRawBits(3);

	std::cout << "\na = " << a.getRawBits() << '\n';
	std::cout << "b = " << b.getRawBits() << '\n';
	std::cout << "c = " << c.getRawBits() << std::endl;

	return 0;
}
