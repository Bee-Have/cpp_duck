/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:27:49 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/18 20:54:43 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int	_fixed_value;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed &newnbr);
		Fixed& operator=(const Fixed &newnbr);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
};
