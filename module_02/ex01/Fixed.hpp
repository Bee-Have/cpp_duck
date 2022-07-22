/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:27:49 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/22 20:32:46 by amarini-         ###   ########.fr       */
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
		Fixed& operator=(const Fixed &newnbr);

		float	toFloat() const;
		int		toInt() const;

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &stream, const Fixed &nbr);
