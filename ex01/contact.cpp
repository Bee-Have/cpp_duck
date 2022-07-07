/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:56:54 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/05 19:08:04 by amarini-         ###   ########.fr       */
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

static std::string	wait_for_input(std::string prefix)
{
	std::string	line;

	while(std::cin)
	{
		int		bad = 0;
		std::cout << prefix;
		std::getline(std::cin, line);
		for (int i = 0; line[i] != '\0'; ++i)
		{
			if (isprint(line[i]) == 0)
			{
				std::cout << "Field can only contain printable characters" << std::endl;
				bad = 1;
				break ;
			}
		}
		if (bad == 0)
		{
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
	}
	return (line);
}

std::string	Contact::get_first_name(void)const
{
	return (_first_name);
}

void	Contact::set_first_name(std::string value)
{
	_first_name.assign(value);
}

std::string	Contact::get_last_name(void)const
{
	return (_last_name);
}

void	Contact::set_last_name(std::string value)
{
	_last_name.assign(value);
}

std::string	Contact::get_nickname(void)const
{
	return (_nickname);
}

void	Contact::set_nickname(std::string value)
{
	_nickname.assign(value);
}

int	Contact::get_phone_number(void)const
{
	return (_phone_number);
}

void	Contact::set_phone_number(int value)
{
	_phone_number = value;
}

std::string	Contact::get_darkest_secret(void)const
{
	return (_darkest_secret);
}

void	Contact::set_darkest_secret(std::string value)
{
	_darkest_secret.assign(value);
}

int	Contact::get_index(void)const
{
	return (_index);
}

void	Contact::set_index(int value)
{
	_index = value;
}

int		Contact::get_oldest()const
{
	return (_oldest);
}

void	Contact::set_oldest(int value)
{
	_oldest = value;
}


void	Contact::new_contact(int nbr)
{
	std::stringstream	ss;
	int					tmp_pn;
	set_first_name(wait_for_input("First name : "));
	set_last_name(wait_for_input("Last name : "));
	set_nickname(wait_for_input("Nickname : "));
	ss << wait_for_input("Phone number : ");
	ss >> tmp_pn;
	set_phone_number(tmp_pn);
	set_darkest_secret(wait_for_input("Darkest Secret : "));
	set_index(nbr);
}
