/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:25:11 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/01 20:44:18 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <sstream>
# include <stdexcept>

template<typename T>
int	easyfind(T &type, int value)
{
	for (int i = 0; type.size(); ++i)
		if (type[i] == value)
			return (i);

	std::ostringstream	ss;

	ss << "::easyfind: value (which is " << value
		<<  ") >= <typename T>type->size() (which is " << type.size() << ")";
	throw std::out_of_range(ss.str());
}

#endif