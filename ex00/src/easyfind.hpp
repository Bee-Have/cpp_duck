/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:25:11 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/04 17:31:43 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <sstream>
# include <stdexcept>

template<typename T>
int	easyfind(T &type, int value)
{
	// typename T::iterator	it = type.begin();
	// int	i = 0;
	// for (; it != type.back(); ++it && ++i)
	// 	if (it == value)
	// 		return (i);
	for (int i = 0; i < type.size(); ++i)
		if (type[i] == value)
			return (i);

	std::ostringstream	ss;

	ss << "::easyfind: value (which is " << value
		<<  ") >= <typename T>type->size() (which is " << type.size() << ")";
	throw std::out_of_range(ss.str());
}

#endif