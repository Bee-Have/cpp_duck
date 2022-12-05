/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:30:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/04 13:28:16 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int	main(void)
{
	// test with vector
	std::cout << "\n";
	{
		std::vector<int>	vector_int(7);

		// fill vector
		vector_int.push_back(4183);
		vector_int.push_back(4183);
		vector_int.push_back(0);
		vector_int.push_back(10);
		vector_int.push_back(4183);
		vector_int.push_back(42);
		vector_int.push_back(-130);
		vector_int.push_back(4183);

		// working simple test
		easyfind(vector_int, -130);
		// working test mutiple occurences
		easyfind(vector_int, 4183);
		// try catch with non working test
		try
		{
			easyfind(vector_int, -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// test with deque
	std::cout << "\n";
	{
		std::deque<float>	deque_float(10);

		// fill deque
		deque_float.push_back(1.2);
		deque_float.push_back(4183);
		deque_float.push_back(4183);
		deque_float.push_back(1.2);
		deque_float.push_back(0);
		deque_float.push_back(4.20);
		deque_float.push_back(10.2333);
		deque_float.push_back(1.2);
		deque_float.push_back(42.1);
		deque_float.push_back(-130.42);
		
		// working simple test
		easyfind(deque_float, 0);
		// working test mutiple occurences
		easyfind(deque_float, 1);
		// try catch with non working test
		try
		{
			easyfind(deque_float, -42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// test with list
	std::cout << "\n";
	{
		std::list<char>	list_char(12);

		// fill list
		list_char.push_back('a');
		list_char.push_back('|');
		list_char.push_back('*');
		list_char.push_back(' ');
		list_char.push_back('|');
		list_char.push_back('0');
		list_char.push_back('|');
		list_char.push_back('k');
		list_char.push_back('*');
		list_char.push_back('|');
		list_char.push_back('.');
		list_char.push_back('*');

		// working simple test
		easyfind(list_char, 'a');
		// working test mutiple occurences
		easyfind(list_char, '*');
		// try catch with non working test
		try
		{
			easyfind(list_char, 'b');
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}