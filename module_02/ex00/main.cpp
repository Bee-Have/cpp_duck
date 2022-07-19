/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:33:22 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/19 13:25:15 by amarini-         ###   ########.fr       */
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

	a.setRawBits(0);
	b.setRawBits(0);
	c.setRawBits(0);

	std::cout << "\na = " << a.getRawBits() << '\n';
	std::cout << "b = " << b.getRawBits() << '\n';
	std::cout << "c = " << c.getRawBits() << '\n';

	a = b;
	b = c;

	std::cout << "\na = " << a.getRawBits() << '\n';
	std::cout << "b = " << b.getRawBits() << '\n';
	std::cout << "c = " << c.getRawBits() << std::endl;

	return 0;
}
