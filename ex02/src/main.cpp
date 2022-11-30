/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:01:48 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/30 15:11:24 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Array.hpp"

template<typename T>
void	print_array(Array<T> array)
{
	for (int i = 0; i < array.size(); ++i)
		std::cout << '[' << array[i] << ']';
	std::cout << "\n";
}

int	main(void)
{
	// simple working test
	{
		// make int array - get index - get size
		Array<int>	int_array(3);

		int_array[0] = 42;
		int_array[1] = 0;
		int_array[2] = 4183;
		print_array(int_array);
		std::cout << "Size of array is : " << int_array.size() << "\n";

		// make char array - get index - get size
		Array<char>	char_array(6);
		char_array[0] = 'k';
		char_array[1] = 'e';
		char_array[2] = 'n';
		char_array[3] = 'o';
		char_array[4] = 'b';
		char_array[5] = 'i';
		print_array(char_array);
		std::cout << "Size of array is : " << char_array.size() << "\n";

		// make float array - get index - get size
		Array<float>	float_array(42);
		for (int i = 0; i < 10; ++i)
			float_array[i] = 42.42f;
		print_array(float_array);
		std::cout << "Size of array is : " << float_array.size() << "\n";
	}
	// tests of default values
	{
		int	size = 3;
		// exemple with default int values
		{
			int	*int_array = new int[size];
			std::cout << '[' << int_array[0] << "]";
			for (int i = 1; i < size; ++i)
				std::cout << '[' << int_array[i] << "]";
			std::cout << "\n";
			delete[] int_array;
		}
		// my result with the same test
		{
			Array<int>	my_array(size);
			print_array(my_array);
			std::cout << "\n";
		}
	}
	// test exceptions with vector as reference
	{
		Array<int>			my_array(5);
		std::vector<int>	vector_array(5);

		try
		{
			vector_array.at(10);
		}
		catch(const std::out_of_range& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			my_array[10];
		}
		catch(const std::out_of_range& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
