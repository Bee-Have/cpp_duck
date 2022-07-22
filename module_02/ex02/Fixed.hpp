/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:27:49 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/22 20:31:56 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int					_fixed_value;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &newnbr);
		Fixed(const int newnbr);
		Fixed(const float newnbr);
		~Fixed();
		// Assignable operator : '='
		Fixed& operator=(const Fixed &newnbr);
		// Comparison operator : '>' '<' '>=' '<=' '==' '!='
		bool	operator>(const Fixed &comp) const;
		bool	operator<(const Fixed &comp) const;
		bool	operator>=(const Fixed &comp) const;
		bool	operator<=(const Fixed &comp) const;
		bool	operator==(const Fixed &comp) const;
		bool	operator!=(const Fixed &comp) const;
		// Arithmetic operators : '+' '-' '*' '/'
		Fixed	operator+(const Fixed &comp) const;
		Fixed	operator-(const Fixed &comp) const;
		Fixed	operator*(const Fixed &comp) const;
		Fixed	operator/(const Fixed &comp) const;
		// Increment/Decrement operators : '++' '--'
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);


		static Fixed		&min(Fixed &fixed, Fixed &comp);
		static const Fixed	&min(const Fixed &fixed, const Fixed &comp);
		static Fixed		&max(Fixed &fixed, Fixed &comp);
		static const Fixed	&max(const Fixed &fixed, const Fixed &comp);

		float	toFloat() const;
		int		toInt() const;

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &stream, const Fixed &nbr);
