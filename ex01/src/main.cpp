/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:57:05 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/25 15:02:51 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "stdint.h"
#include <iostream>

#define BOLD "\033[1m"
#define YB "\033[1;33m"
#define END "\33[0m"

uintptr_t	serialize(Data *ptr);
Data	*deserialize(uintptr_t raw);

int	main(void)
{
	std::cout << YB << "Step by step test :\n" << END;
	{
		Data		*data = new Data;
		uintptr_t	ptr_address;

		data->u_test = 0;
		data->i_test = 10;
		data->str.assign("HEYYYY");
		
		std::cout << "Original address: " << BOLD << data << "\n" << END;
		ptr_address = serialize(data);
		std::cout << "Copy of address in uint: " << BOLD << ptr_address << "\n" << END;
		data = NULL;
		std::cout << "Assigning data to NULL\n";
		std::cout << "NULL Data address: " << BOLD << data << "\n" << END;
		std::cout << "Reasigning data with address ptr\n";
		data = deserialize(ptr_address);
		std::cout << "Checking address: " << BOLD << data << "\n" << END << std::endl;
	}

	std::cout << YB << "Test asked by 42 subject :\n" << END;
	{
		Data		*data = new Data;

		std::cout << "Original address: " << BOLD << data << "\n" << END;
		std::cout << "Reassignment of address: "  << BOLD << deserialize(serialize(data)) << "\n" << END;
		std::cout << "Checking if address is still the same: " << BOLD << data << "\n" << END;
	}
	return (0);
}