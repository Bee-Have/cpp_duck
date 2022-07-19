/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:07:55 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/19 12:28:25 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed_value = 0;
}

Fixed::Fixed(const Fixed &newnbr): _fixed_value(newnbr.getRawBits())
{}

Fixed& Fixed::operator=(const Fixed &newnbr)
{
	if (this != &newnbr)
		this->_fixed_value = newnbr.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{}

int		Fixed::getRawBits() const
{
	return (_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_value = raw;
}
