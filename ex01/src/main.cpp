/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:57:05 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/23 13:46:25 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "stdint.h"
#include <iostream>

uintptr_t	serialize(Data *ptr);
Data	*deserialize(uintptr_t raw);

int	main(void)
{
	Data		*test_d = new Data;
	// uintptr_t	test_uint;

	test_d->u_test = 0;
	test_d->i_test = 10;
	test_d->str.assign("HEYYYY");
	// std::cout << "Data: "<< test_d->i_test << " - " << test_d->u_test << "\n";
	// test_uint = serialize(test_d);
	// std::cout << "uintptr_t: " << test_uint << "\n";
	// test_d = deserialize(test_uint);
	// std::cout << "Data: "<< test_d->i_test << " - " << test_d->u_test << "\n";
	// std::cout << "uintptr_t: " << test_uint << "\n";

	std::cout << test_d << "\n";
	std::cout << "test: " << deserialize(serialize(test_d)) << "\n";
	std::cout << test_d << "\n";
	return (0);
}