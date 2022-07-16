/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:29:14 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/17 00:06:31 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

std::string	Weapon::getType(void) const
{
	return (type);
}

void	Weapon::setType(std::string newtype)
{
	type.assign(newtype);
}

Weapon::Weapon(const Weapon &newweapon)
{
	this->type = newweapon.type;
}

Weapon::Weapon(std::string newweapon) : type(newweapon)
{}

Weapon::~Weapon(void)
{}
