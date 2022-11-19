/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:39:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/19 15:59:43 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	(void)ac;
	std::string	convert;
	convert.assign(av[1]);

	// if size == 1 & str[0] isdigit == 0 : CHAR
	// if str[last] == f && str[last - 1] isdigit != 0 : FLOAT
	// if str[last] != f && str has . : DOUBLE
	// if str[last] != f && str has no . : INT
	if (convert.size() == 1 && std::isdigit(convert[0]) == 0)
		std::cout << "It's a character\n";
	else if (convert[convert.size() - 1] == 'f' && std::isdigit(convert[convert.size() - 2]) != 0)
		std::cout << "It's a float\n";
	else if (std::isdigit(convert[convert.size() - 1]) != 0 && convert.find(".", 0) != std::string::npos)
		std::cout << "It's a double\n";
	else if (std::isdigit(convert[convert.size() - 1]) != 0 && convert.find(".", 0) == std::string::npos)
		std::cout << "It's an int\n";
	
	return (0);
}