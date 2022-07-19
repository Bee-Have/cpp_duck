/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:07:55 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/19 18:25:28 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_value = 0;
}

Fixed::Fixed(const Fixed &newnbr): _fixed_value(newnbr._fixed_value)
{}

Fixed::Fixed(const int newnbr)
{
	_fixed_value = static_cast<int>((round(newnbr * (1 << _fractional_bits))));
}

Fixed::Fixed(const float newnbr)
{
	_fixed_value = static_cast<float>((round(newnbr * (1 << _fractional_bits))));
}

// Assignable operator
Fixed& Fixed::operator=(const Fixed &newnbr)
{
	if (this != &newnbr)
		this->_fixed_value = newnbr._fixed_value;
	return (*this);
}

// Comparison operators
bool	Fixed::operator>(const Fixed &comp) const
{
	if (this->_fixed_value <= comp._fixed_value)
		return (false);
	return (true);
}

bool	Fixed::operator<(const Fixed &comp) const
{
	if (this->_fixed_value >= comp._fixed_value)
		return (false);
	return (true);
}

bool	Fixed::operator>=(const Fixed &comp) const
{
	if (this->_fixed_value < comp._fixed_value)
		return (false);
	return (true);
}

bool	Fixed::operator<=(const Fixed &comp) const
{
	if (this->_fixed_value > comp._fixed_value)
		return (false);
	return (true);
}

bool	Fixed::operator==(const Fixed &comp) const
{
	if (this->_fixed_value != comp._fixed_value)
		return (false);
	return (true);
}

bool	Fixed::operator!=(const Fixed &comp) const
{
	if (this->_fixed_value == comp._fixed_value)
		return (false);
	return (true);
}

std::ostream& operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}

// Arithmetic operators
Fixed	Fixed::operator+(const Fixed &comp) const
{
	return (this->_fixed_value + comp._fixed_value);
}

Fixed	Fixed::operator-(const Fixed &comp) const
{
	return (this->_fixed_value - comp._fixed_value);
}

Fixed	Fixed::operator*(const Fixed &comp) const
{
	return (this->_fixed_value * comp._fixed_value);
}

Fixed	Fixed::operator/(const Fixed &comp) const
{
	return (this->_fixed_value / comp._fixed_value);
}

Fixed::~Fixed(void)
{}

Fixed	&Fixed::min(Fixed &fixed, Fixed &comp)
{
	if (fixed <= comp)
		return (fixed);
	return (comp);
}

const Fixed	&Fixed::min(const Fixed &fixed, const Fixed &comp)
{
	if (fixed <= comp)
		return (fixed);
}

Fixed	&Fixed::max(Fixed &fixed, Fixed &comp)
{
	if (fixed >= comp)
		return (fixed);
	return (comp);
}

const Fixed	&Fixed::max(const Fixed &fixed, const Fixed &comp)
{
	if (fixed >= comp)
		return (fixed);
	return (comp);
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
	return (_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_value = raw;
}
