/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:57:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/28 02:04:55 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	{
		// create simple working bureaucrat
		// test cpy constructor
		Bureaucrat	Moss(10, "Moss");
		Bureaucrat	Jen(Moss);

		std::cout << Moss << "\n";
		std::cout << Jen << "\n";
	}
	{
		// test creating bureaucrat with :
		// default constructor
		// constructor with bad int
		// constructor with bad int and or bad name
	}
	{
		// test incrementing already high grade
		// test decementin already low grade
	}
	return (0);
}
