/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/05 14:13:02 by amarini-         ###   ########.fr       */
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
		else if (line.compare("ADD") == 0)
		{
			std::cout << "add contact" << std::endl;
			phonebook.add_contact();
		}
		else if (line.compare("SEARCH") == 0)
			phonebook.search();
		else if (std::cin)
			std::cout << "ADD: Add a contact | SEARCH: Search existing contacts | EXIT: Exits phonebook" << std::endl;
	}
	std::cout << "Your Phonebook has been deleted" << std::endl;
	return (0);
}