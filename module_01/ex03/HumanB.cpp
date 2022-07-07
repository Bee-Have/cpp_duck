/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:32:45 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 17:41:41 by amarini-         ###   ########.fr       */
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

Weapon	HumanB::get_weapon(void) const
{
	return (_weapon);
}

void		HumanB::set_weapon(Weapon neweapon)
{
	_weapon = neweapon;
}

void	HumanB::attack(void)
{
	std::cout << get_name() << " attacks with their " << get_weapon().getType()
		<< std::endl;
}

HumanB::HumanB(void)
{
	
}

HumanB::~HumanB(void)
{
	
}
