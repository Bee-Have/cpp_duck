/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:00:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/29 15:09:45 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include "iter.hpp"

#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int	main(void)
{
	std::cout << GB << "Simple INT array tests :\n" << END;
	{
		int	int_array[] = {0, 1, 2, 3, 4};

		std::cout << BOLD<< "Original INT array :\n" << END;
		print_array(int_array, 5);
		
		std::cout << YB <<  "Call to iter() with To_Lower() (+32 to each element)\n" << END;
		iter(int_array, 5, To_Lower);
		
		std::cout << BOLD << "Array after To_Lower() :\n" << END;
		print_array(int_array, 5);
		
		std::cout << YB << "Call to iter() with To_Fourty_Two()(assign every element to 42)\n" << END;
		iter(int_array, 5, To_Fourty_Two);
		
		std::cout << BOLD << "Array after To_Fourty_Two() :\n" << END;
		print_array(int_array, 5);
	}
	std::cout << GB << "\nSimple CHAR* tests :\n" << END;
	{
		char	str[] = "general.kenobi";

		std::cout << BOLD << "Original CHAR* array :" << END << std::endl;
		print_array(str, std::strlen(str));

		std::cout << YB << "Call to iter() with To_Upper() (-32 to each element)\n" << END;
		iter(str, std::strlen(str), To_Upper);

		std::cout << BOLD << "Array after To_Upper() :" << END << std::endl;
		print_array(str, std::strlen(str));

		std::cout << YB << "Call to iter() with To_Lower() (+32 to each element)\n" << END;
		iter(str, std::strlen(str), To_Lower);

		std::cout << BOLD << "Array after To_Lower() :" << END << std::endl;
		print_array(str, std::strlen(str));

		std::cout << YB << "Call to iter() with To_Fourty_Two()(assign every element to 42)\n" << END;
		iter(str, std::strlen(str), To_Fourty_Two);

		std::cout << BOLD << "Array after To_Fourty_Two() :" << END << std::endl;
		print_array(str, std::strlen(str));
	}
	return (0);
}