/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:30:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/05 14:10:04 by amarini-         ###   ########.fr       */
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
		integer::easyfind(vector_int, -130);
		// working test mutiple occurences
		integer::easyfind(vector_int, 4183);
		// try catch with non working test
		try
		{
			integer::easyfind(vector_int, -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// test with deque
	std::cout << "\n";
	{
		std::deque<int>	deque_int(10);

		// fill deque
		deque_int.push_back(1);
		deque_int.push_back(4183);
		deque_int.push_back(4183);
		deque_int.push_back(1);
		deque_int.push_back(0);
		deque_int.push_back(4);
		deque_int.push_back(10);
		deque_int.push_back(1);
		deque_int.push_back(42);
		deque_int.push_back(-130);
		
		// working simple test
		iterator::easyfind(deque_int, 0);
		// working test mutiple occurences
		iterator::easyfind(deque_int, 1);
		// try catch with non working test
		try
		{
			iterator::easyfind(deque_int, -42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// test with list
	std::cout << "\n";
	{
		std::list<int>	list_int(12);

		// fill list
		list_int.push_back('a');
		list_int.push_back('|');
		list_int.push_back('*');
		list_int.push_back(' ');
		list_int.push_back('|');
		list_int.push_back('0');
		list_int.push_back('|');
		list_int.push_back('k');
		list_int.push_back('*');
		list_int.push_back('|');
		list_int.push_back('.');
		list_int.push_back('*');

		// working simple test
		integer::easyfind(list_int, 'a');
		// working test mutiple occurences
		iterator::easyfind(list_int, '*');
		// try catch with non working test
		try
		{
			integer::easyfind(list_int, 'b');
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}