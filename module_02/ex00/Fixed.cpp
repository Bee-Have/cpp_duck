/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:07:55 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/19 18:26:05 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &newnbr): _fixed_value(newnbr._fixed_value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &newnbr)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newnbr)
		this->_fixed_value = newnbr.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed_value = raw;
}
