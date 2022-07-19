/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:07:55 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/19 18:25:46 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
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

Fixed::Fixed(const int newnbr)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_value = static_cast<int>((round(newnbr * (1 << _fractional_bits))));
}

Fixed::Fixed(const float newnbr)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_value = static_cast<float>((round(newnbr * (1 << _fractional_bits))));
}

Fixed& Fixed::operator=(const Fixed &newnbr)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newnbr)
		this->_fixed_value = newnbr._fixed_value;
	return (*this);
}

std::ostream& operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixed_value) / static_cast<float>(1 << _fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(_fixed_value) / static_cast<int>(1 << _fractional_bits));
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
