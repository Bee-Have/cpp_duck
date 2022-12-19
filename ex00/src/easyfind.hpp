/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:25:11 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/19 13:25:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <sstream>
# include <stdexcept>

namespace integer
{
	template<typename T>
	int	easyfind(T &type, int value)
	{
		typename T::iterator	it = type.begin();
		for (int	i = 0; it != type.end(); ++it, ++i)
			if (*it == value)
				return (i);

		std::ostringstream	ss;

		ss << "integer::easyfind: value (which is " << value
			<<  ") >= <typename T>type->size() (which is " << type.size() << ")";
		throw std::out_of_range(ss.str());
	}
}

namespace iterator
{
	template<typename T>
	typename T::iterator	easyfind(T &type, int value)
	{
		typename T::iterator result;
		result = std::find(type.begin(), type.end(), value);
		if (*result == value)
			return (result);

		std::ostringstream	ss;

		ss << "iterator::easyfind: value (which is " << value
			<<  ") >= <typename T>type->size() (which is " << type.size() << ")";
		throw std::out_of_range(ss.str());
	}
}


#endif