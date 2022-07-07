/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:32:45 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 17:40:32 by amarini-         ###   ########.fr       */
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

void		HumanA::set_weapon(Weapon neweapon)
{
	_weapon = neweapon;
}

void	HumanA::attack(void)
{
	std::cout << get_name() << " attacks with their " << get_weapon().getType()
		<< std::endl;
}

HumanA::HumanA(Weapon neweapon)
{
	set_weapon(neweapon);
}

HumanA::~HumanA(void)
{
	
}
