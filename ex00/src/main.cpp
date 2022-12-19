/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:30:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/19 16:18:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <iostream>
#include <sstream>
#include "easyfind.hpp"

namespace sequence
{
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
}

namespace adaptator
{
	template <typename T>
	void	print_array(T array)
	{
		for (; array.empty() == false; array.pop())
			std::cout << '[' << array.top() << ']';
		std::cout << std::endl;
	}
	template <>
	void	print_array(std::queue<int> array)
	{
		for (; array.empty() == false; array.pop())
			std::cout << '[' << array.front() << ']';
		std::cout << std::endl;
	}
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

		sequence::print_array(vector_int);

		// working simple test
		std::cout << "position of \"-130\" is "
			<< std::distance(vector_int.begin(), iterator::easyfind(vector_int, -130)) << '\n';

		// working test mutiple occurences
		std::cout << "position of \"4183\" is "
			<< iterator::easyfind(vector_int, 4183) - vector_int.begin() << '\n';

		// try catch with non working test
		try
		{
			iterator::easyfind(vector_int, -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	// test with deque
	std::cout << "\nSimple tests with container \'deque\' :\n";
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

		sequence::print_array(deque_int);

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
	std::cout << "\nSimple tests with container \'list\' :\n";
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

		sequence::print_array(list_int);

		// working simple test
		std::cout << "position of \"a\" is "
			<< std::distance(list_int.begin(), iterator::easyfind(list_int, 'a')) << '\n';
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
	// stack test
	std::cout << "\nSimple tests with container \'stack\' :\n";
	{
		std::stack<int>	stack_int;

		stack_int.push(4183);
		stack_int.push(0);
		stack_int.push(1);
		stack_int.push(0);
		stack_int.push(54);
		stack_int.push(73);
		stack_int.push(42);

		adaptator::print_array(stack_int);
		std::cout << "position of \"42\" is " << integer::easyfind(stack_int, 42) << '\n';
		std::cout << "position of \"0\" is " << integer::easyfind(stack_int, 0) << '\n';
		try
		{
			integer::easyfind(stack_int, 128);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// queue
	std::cout << "\nSimple tests with container \'queue\' :\n";
	{
		std::queue<int>	queue_int;

		queue_int.push(4183);
		queue_int.push(4183);
		queue_int.push(0);
		queue_int.push(10);
		queue_int.push(4183);
		queue_int.push(42);
		queue_int.push(-130);
		queue_int.push(4183);

		adaptator::print_array(queue_int);
		std::cout << "position of \"-130\" is " << integer::easyfind(queue_int, -130) << '\n';
		std::cout << "position of \"4183\" is " << integer::easyfind(queue_int, 4183) << '\n';

		try
		{
			integer::easyfind(queue_int, -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// priority_queue
	std::cout << "\nSimple tests with container \'priority_queue\' :\n";
	{
		std::priority_queue<int> prio_queue_int;

		prio_queue_int.push(1);
		prio_queue_int.push(4183);
		prio_queue_int.push(4183);
		prio_queue_int.push(1);
		prio_queue_int.push(0);
		prio_queue_int.push(4);
		prio_queue_int.push(10);
		prio_queue_int.push(1);
		prio_queue_int.push(42);
		prio_queue_int.push(-130);
	
		adaptator::print_array(prio_queue_int);

		std::cout << "position of \"10\" is " << integer::easyfind(prio_queue_int, 10) << '\n';
		std::cout << "position of \"1\" is " << integer::easyfind(prio_queue_int, 1) << '\n';

		try
		{
			integer::easyfind(prio_queue_int, -42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
