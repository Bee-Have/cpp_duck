/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 15:35:46 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int	main()
{
	std::string line;
	Phonebook	phonebook;

	while (std::cin)
	{
		std::cout << "Input : ";
		std::getline(std::cin, line);
		if (line.compare("EXIT") == 0)
		{
			std::cout << "Your Phonebook has been deleted" << std::endl;
			break ;
		}
		if (line.compare("ADD") == 0)
		{
			std::cout << "add contact" << std::endl;
			phonebook.add_contact();
		}
		if (line.compare("SEARCH") == 0)
			std::cout << "search contact" << std::endl;
	}
	return (0);
}