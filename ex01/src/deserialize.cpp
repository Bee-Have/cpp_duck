/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:44:58 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/23 13:48:10 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

Data	*deserialize(uintptr_t raw)
{
	Data	*reasign_ptr;
	reasign_ptr = reinterpret_cast<Data *>(raw);
	return (reasign_ptr);
}
