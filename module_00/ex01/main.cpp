/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/05 13:33:00 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int	main(void)
{
	std::string line;
	Phonebook	phonebook;

	while (std::cin)
	{
		std::cout << "Input : ";
		std::getline(std::cin, line);
		if (line.compare("EXIT") == 0)
			break ;
		if (line.compare("ADD") == 0)
		{
			std::cout << "add contact" << std::endl;
			phonebook.add_contact();
		}
		if (line.compare("SEARCH") == 0)
			phonebook.search();
	}
	std::cout << "Your Phonebook has been deleted" << std::endl;
	return (0);
}