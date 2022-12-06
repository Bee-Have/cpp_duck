/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:20:53 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/06 14:34:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	// TODO add printing method to span
	// simple test
	{
		// create short span
		// fill it with addNumber()
		// find shortest span
		// find longest span
	}
	// addRange tests
	{
		// create short span of 4
		// call addRange (0 100)
		
		// create span of 10
		// call addRange (10 15)
		
		// create big span of 1000
		// call addRange (42 4183)
	}
	// range test
	{
		// create span 10
		// call fill with 42
		// call shortestSpan

		// create span 2
		// add (1 10000)
		// call shortest span
		// call longest span
	}
	// error tests
	{
		// create span of 0
		// try to add number
		
		// create span of 3
		// try accessing element 4
		
		// create span of 1000
		// add 1 value
		// call shortest span
		// call longest span
		
		// create span of 2
		// fill span with addNumber
		// try to addRange on top of it
	}
	return (0);
}
