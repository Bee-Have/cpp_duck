/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:53:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/29 14:27:27 by amarini-         ###   ########.fr       */
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
void	print_array(T *array, int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << "[" << array[i] << "]";
	std::cout << "\n";
	return ;
}

template <typename T>
void	iter(T *array, int size, void(f(T&)))
{
	for (int i = 0; i < size; ++i)
		f(array[i]);
}
