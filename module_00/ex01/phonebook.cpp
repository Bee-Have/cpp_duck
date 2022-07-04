/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:13:29 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 17:12:31 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
	set_nbr_contacts(0);
}

Phonebook::~Phonebook(void)
{
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

void	Phonebook::add_contact(void)
{
	if (get_nbr_contacts() == 0)
		contacts->set_oldest(1);
	if (get_nbr_contacts() == 8)
		contacts[get_oldest_contact()].new_contact();
	else
	{
		contacts[get_nbr_contacts()].new_contact();
		set_nbr_contacts(get_nbr_contacts() + 1);
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
