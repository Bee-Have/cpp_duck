/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:53:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/06 13:55:06 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	To_Upper(T &arg)
{
	arg -= 32;
	return ;
}

template <typename T>
void	To_Lower(T &arg)
{
	arg += 32;
	return ;
}

template <typename T>
void	To_Fourty_Two(T &arg)
{
	arg = 42;
	return ;
}

template <typename T>
void	print(T const arg)
{
	std::cout << arg;
}

template <typename T>
void	iter(T *array, int size, void(f(T&)))
{
	for (int i = 0; i < size; ++i)
		f(array[i]);
}
