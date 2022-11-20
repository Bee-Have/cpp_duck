/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:39:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/20 16:57:22 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string	str;
	Converter	convert;
	if (ac == 1)
	{
		std::cout << "No parameter given" << std::endl;
		return (1);
	}
	str.assign(av[1]);
	convert.find_true_type(str);
	convert.convert_to_all_types();
	convert.print_values();
	return (0);
}