/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:39:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/19 19:56:57 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	find_type(std::string str)
{
	std::cout << "Type : ";
	if (str.size() == 1 && std::isdigit(str[0]) == 0)
		std::cout << "char";
	else if (((str[0] != '-' && str.find_first_not_of("0123456789", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789", 1) == std::string::npos))
		&& ((str[0] != '-' && str.size() < 10) || (str[0] == '-' && str.size() < 11)))
		std::cout << "int";
	else if ((str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0
		|| (((std::isdigit(str[0]) != 0 && str.find_first_not_of("0123456789.f", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789.f", 1) == std::string::npos))
		&& str.find_first_of(".", 0) == str.find_last_of(".", str.size() -1)
		&& str.find_first_of("f", 0) == str.find_last_of("f", str.size() -1)))
		&& str[str.size() - 1] == 'f')
		std::cout << "float";
	else if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0
		|| (((std::isdigit(str[0]) != 0 && str.find_first_not_of("0123456789.", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789.", 1) == std::string::npos))
		&& str.find_first_of(".", 0) == str.find_last_of(".", str.size() -1)))
		std::cout << "double";
	else
		std::cout << "undefined";
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "No parameter given" << std::endl;
		return (1);
	}
	std::string	convert;
	convert.assign(av[1]);
	find_type(convert);
	return (0);
}