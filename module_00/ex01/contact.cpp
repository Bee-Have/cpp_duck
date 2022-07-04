/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:56:54 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 17:39:45 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <sstream>
#include <string>

Contact::Contact(void)
{
	set_oldest(0);
}

Contact::~Contact(void)
{
}

int		Contact::get_oldest()const
{
	return (_oldest);
}

void	Contact::set_oldest(int value)
{
	_oldest = value;
}

std::string	wait_for_input(std::string prefix)
{
	std::string	line;

	while(std::cin)
	{
		std::cout << prefix;
		std::getline(std::cin, line);
		if (prefix.compare("Phone number : ") == 0)
		{
			int	nbr = 0;
			for (int i = 0; line[i] != '\0'; ++i)
				if (std::isdigit(line[i]) == 0)
				{
					std::cout << "Field has to be a number" << std::endl;
					nbr = 1;
					break ;
				}
			if (nbr == 0)
				break ;
		}
		else if (line.compare("") == 0)
			std::cout << "Field Cannot be empty" << std::endl;
		else
			break ;
	}
	return (line);
}

void	Contact::new_contact(int nbr)
{
	std::stringstream	ss;
	first_name = wait_for_input("First name : ");
	last_name = wait_for_input("Last name : ");
	nickname = wait_for_input("Nickname : ");
	ss << wait_for_input("Phone number : ");
	ss >> phone_number;
	darkest_secret = wait_for_input("Darkest Secret : ");
	index = nbr;
}
