/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:13:29 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/04 15:34:53 by amarini-         ###   ########.fr       */
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

void	Phonebook::add_contact(void)
{
	contacts[get_nbr_contacts()].new_contact();
	set_nbr_contacts(get_nbr_contacts() + 1);
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
