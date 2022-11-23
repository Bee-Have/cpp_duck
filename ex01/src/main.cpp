/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:57:05 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/23 14:07:19 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "stdint.h"
#include <iostream>

uintptr_t	serialize(Data *ptr);
Data	*deserialize(uintptr_t raw);

int	main(void)
{
	std::cout << "Step by step test :\n";
	{
		Data		*data = new Data;
		uintptr_t	ptr_address;

		data->u_test = 0;
		data->i_test = 10;
		data->str.assign("HEYYYY");
		
		std::cout << "Original address: " << data << "\n";
		ptr_address = serialize(data);
		std::cout << "Copy of address in uint: " << ptr_address << "\n";
		data = NULL;
		std::cout << "Assigning data to NULL\n";
		std::cout << "NULL Data address: " << data << "\n";
		std::cout << "Reasigning data with address ptr\n";
		data = deserialize(ptr_address);
		std::cout << "Checking address: " << data << "\n" << std::endl;
	}

	std::cout << "Test asked by 42 subject :\n";
	{
		Data		*data = new Data;

		std::cout << "Original address: " << data << "\n";
		std::cout << "Reassignment of address: " << deserialize(serialize(data)) << "\n";
		std::cout << "Checking if address is still the same: " << data << "\n";
	}
	return (0);
}