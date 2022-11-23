/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:28:14 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/23 12:44:54 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	test;
	// test = const_cast<uintptr_t>(*tr);
	test = (uintptr_t)&ptr;
	return (test);
}
