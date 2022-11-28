/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:24:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/28 15:58:05 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

// swap template
// no idea if i'm doing this right...
template<typename T>
void	swap(T src, T dst)
{
	T	tmp = dst;
	
	dst = src;
	src = tmp;
}

// min template
// no idea if i'm doing this right...
template<typename T>
T	min(T src, T cmp)
{
	if (src < cmp)
		return (src);
	return (cmp);
}

// max template
// no idea if i'm doing this right...
template<typename T>
T	max(T src, T cmp)
{
	if (src > cmp)
		return (src);
	return (cmp);
}
