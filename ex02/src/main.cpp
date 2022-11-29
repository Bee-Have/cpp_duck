/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:01:48 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/29 17:58:36 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	{
		// int tests :
		// int	size = 3;
		// int	*a = new int(size);
		// std::cout << a[0] << std::endl;
		// for (int i = 1; i < size; ++i)
		// 	std::cout << a[i] << std::endl;
	}
	{
		Array<int>	test;
		std::cout << test.get_array()[0] << std::endl;
		for (int i = 1; i < size; ++i)
			std::cout << test.[i] << std::endl;
	}
	return (0);
}
