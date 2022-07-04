/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:56:54 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 15:34:48 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <sstream>
#include <string>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	wait_for_input(std::string prefix)
{
	std::string	line;

	while(std::cin)
	{
		std::cout << prefix;
		std::getline(std::cin, line);
		if (line.compare("") == 0)
			std::cout << "Field Cannot be empty" << std::endl;
		else
			break ;
	}
	return (line);
}

void	Contact::new_contact(void)
{
	std::stringstream ss;
	first_name = wait_for_input("First name : ");
	last_name = wait_for_input("Last name : ");
	nickname = wait_for_input("Nickname : ");
	ss << wait_for_input("Phone number : ");
	ss >> phone_number;
	darkest_secret = wait_for_input("Darkest Secret : ");
	index = 0;
}
