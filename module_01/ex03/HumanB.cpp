/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:32:45 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 18:27:21 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

std::string	HumanB::get_name(void) const
{
	return (name);
}

void		HumanB::set_name(const char *newname)
{
	if (newname != NULL)
		name.assign(newname);
	else
		name.assign("NoName-B");
}

Weapon	*HumanB::get_weapon(void) const
{
	return (_weapon);
}

void		HumanB::setWeapon(Weapon &neweapon)
{
	_weapon = &neweapon;
}

void	HumanB::attack(void)
{
	if (_weapon == NULL)
		std::cout << name << " doesn't have a weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << _weapon->getType()
			<< std::endl;
}

HumanB::HumanB(const char *newname) : _weapon(NULL), name("NoName-B")
{
	if (newname != NULL)
		name.assign(newname);
}

HumanB::~HumanB(void)
{}
