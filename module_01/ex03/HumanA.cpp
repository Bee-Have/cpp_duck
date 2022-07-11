/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:32:45 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 15:18:00 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

std::string	HumanA::get_name(void) const
{
	return (name);
}

void		HumanA::set_name(std::string newname)
{
	name.assign(newname);
}

Weapon	HumanA::get_weapon(void) const
{
	return (_weapon);
}

void		HumanA::setWeapon(Weapon &newweapon)
{
	_weapon = newweapon;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << _weapon.getType()
		<< std::endl;
}

HumanA::HumanA(std::string newname, Weapon &newweapon): _weapon(newweapon), name(newname)
{}

HumanA::~HumanA(void)
{}
