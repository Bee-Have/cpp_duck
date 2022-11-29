/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:45:40 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/29 17:56:02 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array
{
	public:
	// Constructors
		Array();
		Array(Array &cpy);
		Array(unsigned int n);
	// Destructor
		~Array();
	// Copy assignment operator
		Array	&operator=(Array &assign);
	// Methods
		int	size() const;
	// Encapsulation
		Array	get_array() const;
	private:
		T	*_array;
};
