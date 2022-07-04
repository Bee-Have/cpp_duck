/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 20:00:12 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include "phonebook.hpp"

void	check_size_str(std::string str)
{
	if (str.size() <= 10)
	{
		std::cout << std::setw(10) << str << std::setw(3) << " | ";
		return ;
	}
	std::string tmp;
	tmp = str.substr(0, 10);
	tmp[9] = '.';
	std::cout << std::setw(10) << tmp << std::setw(3) << " | ";
}

void	search_index(Phonebook phonebook)
{
	std::string line;

	(void)phonebook;
	while (std::cin)
	{
		std::stringstream ss;
		int	test = 10;
		std::cout << "Search Index :";
		std::getline(std::cin, line);
		// for (int i = 0; i < line.size(); ++i)
		// {
		// 	int	nbr = 0;
		// 	if (std::isdigit(line[i]) == 0)
		// 	{
		// 		std::cout << "Entry mut be a number\n";
		// 		nbr = 1;
		// 		break ;
		// 	}
		// }
		ss << line;
		ss >> test;
		std::cout << '[' << line << "]-[" << test << "]\n";
	}
}

void	search(Phonebook phonebook)
{
	std::cout << std::setw(10) << "INDEX" << std::setw(3) << " | "
		<< std::setw(10) << "FIRST NAME" << std::setw(3) << " | "
		<< std::setw(10) << "LAST NAME" << std::setw(3) << " | "
		<< std::setw(10) << "NICKNAME" << '\n';
	for (int i = 0; i < 49; ++i)
		std::cout << "-";
	std::cout << '\n';
	for (int i = 0; i < phonebook.get_nbr_contacts(); ++i)
	{
		std::cout << std::setw(10) << phonebook.contacts[i].index
			<< std::setw(3) << " | ";
		check_size_str(phonebook.contacts[i].first_name);
		check_size_str(phonebook.contacts[i].last_name);
		check_size_str(phonebook.contacts[i].nickname);
		if (i < phonebook.get_nbr_contacts() - 1)
			std::cout << '\n';
	}
	std::cout << std::endl;
	// search_index(phonebook);
}

int	main(void)
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
			search(phonebook);
	}
	return (0);
}