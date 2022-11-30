/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:01:48 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/30 16:10:40 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Array.hpp"

#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

template<typename T>
void	print_array(Array<T> array)
{
	for (int i = 0; i < array.size(); ++i)
		std::cout << '[' << array[i] << ']';
	std::cout << "\n";
}

int	main(void)
{
	std::cout << GB << "Simple working tests :\n";
	{
		std::cout << "INT array tests :\n" << END;
		Array<int>	int_array(3);

		int_array[0] = 42;
		int_array[1] = 0;
		int_array[2] = 4183;
		std::cout << YB << "Print array after initializing it :\n" << END;
		print_array(int_array);
		std::cout << YB << "Size of array is : "  << END << int_array.size() << "\n";

		std::cout << GB << "CHAR array tests :\n" << END;
		Array<char>	char_array(5);
		char_array[0] = 'B';
		char_array[1] = 'e';
		char_array[2] = 'b';
		char_array[3] = 'o';
		char_array[4] = 'p';
		std::cout << YB << "Print array after initializing it :\n" << END;
		print_array(char_array);
		std::cout << YB << "Size of array is : "  << END << char_array.size() << "\n";

		std::cout << GB << "FLOAT array tests :\n" << END;
		Array<float>	float_array(42);
		for (int i = 0; i < 10; ++i)
			float_array[i] = 42.42f;
		std::cout << YB << "Print array after initializing it :\n" << END;
		print_array(float_array);
		std::cout << YB << "Size of array is : "  << END << float_array.size() << "\n";
	}
	std::cout << GB << "\nDefault values tests (implied by 42 subject) :\n";
	{
		int	size = 3;
		std::cout << "Exemple with classic int array :\n" << END;
		{
			int	*int_array = new int[size];
			std::cout << '[' << int_array[0] << "]";
			for (int i = 1; i < size; ++i)
				std::cout << '[' << int_array[i] << "]";
			std::cout << "\n";
			delete[] int_array;
		}
		std::cout << YB << "Result with my int array :\n" << END;
		{
			Array<int>	my_array(size);
			print_array(my_array);
			std::cout << "\n";
		}
	}
	std::cout << GB << "\nReading out of bound exception tests :\n";
	{
		std::cout << "Creating vector array of INT\n";
		Array<int>			my_array(5);
		std::cout << "Creating my array of INT\n" << END;
		std::vector<int>	vector_array(5);

		std::cout << YB << "Trying to access element out of bound of array with Vector :\n" << END;
		try
		{
			vector_array.at(10);
		}
		catch(const std::out_of_range& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << YB << "Trying to access element out of bound of array with my Array :\n" << END;
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
