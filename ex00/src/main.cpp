/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:30:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/05 15:34:09 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include <iostream>
#include "easyfind.hpp"


template <typename T>
void	print_array(T &array)
{
	typename T::iterator	it = array.begin();

	for (; it != array.end(); ++it)
		std::cout << '[' << *it << ']';
	std::cout << std::endl;
}
template <>
void	print_array(std::list<int> &array)
{
	std::list<int>::iterator	it = array.begin();

	for (; it != array.end(); ++it)
		std::cout << '[' << static_cast<char>(*it) << ']';
	std::cout << std::endl;
}

int	main(void)
{
	// test with vector
	std::cout << "Simple tests with container \'vector\' :\n";
	{
		std::vector<int>	vector_int;

		// fill vector
		vector_int.push_back(4183);
		vector_int.push_back(4183);
		vector_int.push_back(0);
		vector_int.push_back(10);
		vector_int.push_back(4183);
		vector_int.push_back(42);
		vector_int.push_back(-130);
		vector_int.push_back(4183);

		print_array(vector_int);

		// working simple test
		std::cout << "position of \"-130\" is " << integer::easyfind(vector_int, -130) << '\n';

		// working test mutiple occurences
		std::cout << "position of \"4183\" is " << integer::easyfind(vector_int, 4183) << '\n';

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
	std::cout << "Simple tests with container \'deque\' :\n";
	{
		std::deque<int>	deque_int;

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

		print_array(deque_int);

		// working simple test
		std::cout << "position of \"10\" is "
			<< iterator::easyfind(deque_int, 10) - deque_int.begin() << '\n';
			// << std::distance(deque_int.begin(), iterator::easyfind(deque_int, 10)) << '\n';
	
		// working test mutiple occurences
		std::cout << "position of \"1\" is "
			<< iterator::easyfind(deque_int, 1) - deque_int.begin() << '\n';
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
	std::cout << "Simple tests with container \'list\' :\n";
	{
		std::list<int>	list_int;

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

		print_array(list_int);

		// working simple test
		std::cout << "position of \"a\" is " << integer::easyfind(list_int, 'a') << '\n';
		// working test mutiple occurences
		std::cout << "position of \"*\" is "
			<< std::distance(list_int.begin(), iterator::easyfind(list_int, '*')) << '\n';
			// << iterator::easyfind(list_int, '*') - list_int.begin() << '\n';
		// try catch with non working test
		try
		{
			iterator::easyfind(list_int, 'b');
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}