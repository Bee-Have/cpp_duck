/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:30:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/01 20:57:30 by amarini-         ###   ########.fr       */
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
		std::vector<int>	simple(7);
		std::vector<int>	repeat = {123, 4183, 4183, 0, 4183, 42};
		std::vector<int>	bad = {123, 4183, 0, 1, 10, 42, -130};

		simple.push_back(123);
		simple.push_back(4183);
		simple.push_back(0);
		simple.push_back(1);
		simple.push_back(10);
		simple.push_back(42);
		simple.push_back(-130);

		// working simple test
		easyfind(simple, -130);
		// working test mutiple occurences
		easyfind(repeat, 4183);
		// try catch with non working test
		try
		{
			easyfind(bad, -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// test with deque
	std::cout << "\n";
	{
		std::deque<float>	simple = {1.2, 4183.4183, 0., 4.20, 10.2333, 42.1, -130.42};
		std::deque<float>	repeat = {1.2, 4183.4183, 1.2, 4.20, 1.2, 1.2, 1.2};
		std::deque<float>	bad = {1.2, 4183.4183, 0., 4.20, 10.2333, 42.1, -130.42};
		// working simple test
		easyfind(simple, 0);
		// working test mutiple occurences
		easyfind(repeat, 1);
		// try catch with non working test
		try
		{
			easyfind(bad, 10000);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	// test with list
	std::cout << "\n";
	{
		std::list<char>	simple = {'a', '*', ' ', '0', 'k', '|', '.'};
		std::list<char>	repeat = {'|', '*', '|', '|', '*', '|', '*'};
		std::list<char>	bad = {'a', '*', ' ', '0', 'k', '|', '.'};
		// working simple test
		easyfind(simple, 'a');
		// working test mutiple occurences
		easyfind(repeat, '*');
		// try catch with non working test
		try
		{
			easyfind(bad, 'b');
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}