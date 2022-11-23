/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:28:14 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/23 13:47:40 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	cpy_ptr;
	cpy_ptr = reinterpret_cast<uintptr_t>(ptr);
	return (cpy_ptr);
}
