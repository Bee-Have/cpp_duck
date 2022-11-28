/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:53:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/28 19:05:12 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	To_Upper(T &arg)
{
	
}

template <typename T>
void	iter(T **addr, int size, void(f(T&)))
{
	for (int i = 0; i < size; ++i)
		f((*addr)[i]);
}
