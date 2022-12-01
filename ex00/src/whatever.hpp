/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:24:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/01 17:26:33 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

// swap template
// Swap twp values of same type T
template <typename T>
void	swap(T &src, T &dst)
{
	T	tmp(dst);

	dst = src;
	src = tmp;
}

// min template
// Returns tiniest value between same type T variables
// If values are equal : returns the second one
template <typename T>
T	min(T src, T cmp)
{
	if (src < cmp)
		return (src);
	return (cmp);
}

// max template
// Returns biggest value between same type T variables
// If values are equal : returns the second one
template <typename T>
T	max(T src, T cmp)
{
	if (src > cmp)
		return (src);
	return (cmp);
}
