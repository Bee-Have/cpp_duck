/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:32:45 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 17:26:01 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

std::string	HumanB::get_name(void) const
{
	return (name);
}

void		HumanB::set_name(std::string newname)
{
	name.assign(newname);
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

HumanB::HumanB(std::string newname) : _weapon(NULL), name(newname)
{}

HumanB::~HumanB(void)
{}
