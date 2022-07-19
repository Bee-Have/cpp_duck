/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:07:55 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/19 15:21:02 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
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
	
}

Fixed::Fixed(const float newnbr)
{
	
}

Fixed& Fixed::operator=(const Fixed &newnbr)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newnbr)
		this->_fixed_value = newnbr.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream &stream, Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat() const
{
	
}

int		Fixed::toInt() const
{
	
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed_value = raw;
}
