/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:13:29 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/05 13:53:00 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

Phonebook::Phonebook(void)
{
	set_nbr_contacts(0);
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::add_contact(void)
{
	if (get_nbr_contacts() == 0)
		contacts->set_oldest(1);
	if (get_nbr_contacts() == 8)
	{
		int	oldest = get_oldest_contact();
		contacts[oldest].new_contact(oldest);
		contacts[oldest].set_oldest(0);
		if (oldest >= 7)
			oldest = -1;
		contacts[oldest + 1].set_oldest(1);
	}
	else
	{
		contacts[get_nbr_contacts()].new_contact(get_nbr_contacts());
		set_nbr_contacts(get_nbr_contacts() + 1);
	}
}

int	Phonebook::get_oldest_contact(void)const
{
	int	i = 0;
	while (i < get_nbr_contacts())
	{
		if (contacts[i].get_oldest() == 1)
			return (i);
		++i;
	}
	return (i);
}

static void	check_size_str(std::string str)
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

void	Phonebook::print_phonebook(void)const
{
	std::cout << std::setw(10) << "INDEX" << std::setw(3) << " | "
		<< std::setw(10) << "FIRST NAME" << std::setw(3) << " | "
		<< std::setw(10) << "LAST NAME" << std::setw(3) << " | "
		<< std::setw(10) << "NICKNAME" << '\n';
	for (int i = 0; i < 49; ++i)
		std::cout << "-";
	std::cout << '\n';
	for (int i = 0; i < get_nbr_contacts(); ++i)
	{
		std::cout << std::setw(10) << contacts[i].index
			<< std::setw(3) << " | ";
		check_size_str(contacts[i].first_name);
		check_size_str(contacts[i].last_name);
		check_size_str(contacts[i].nickname);
		if (i < get_nbr_contacts() - 1)
			std::cout << '\n';
	}
	std::cout << std::endl;
}

void	Phonebook::search(void)
{
	std::string line;

	print_phonebook();
	while (std::cin)
	{
		std::stringstream ss;
		int	index = 0;
		std::cout << "Search Index :";
		std::getline(std::cin, line);
		ss << line;
		ss >> index;
		if (get_nbr_contacts() == 0)
		{
			std::cout << "You have not contacts" << std::endl;
			break ;
		}
		if (index == 0 && line.compare("0") != 0)
			std::cout << "Entry must be a number" << std::endl;
		else if (index >= get_nbr_contacts())
			std::cout << "Entry must be an existing index" << std::endl;
		else
		{
			std::cout << "FIRST NAME : " << contacts[index].first_name
			<< "\nLAST NAME : " << contacts[index].last_name
			<< "\nNICKNAME : " << contacts[index].nickname
			<< "\nPHONE NUMBER : " << contacts[index].phone_number
			<< "\nDARKEST SECRET : " << contacts[index].darkest_secret
			<< std::endl;
			break ;
		}
	}
}

int	Phonebook::get_nbr_contacts(void) const
{
	return (_nbr_contacts);
}

void	Phonebook::set_nbr_contacts(int value)
{
	if (value >= 8)
		value = 8;
	_nbr_contacts = value;
}
