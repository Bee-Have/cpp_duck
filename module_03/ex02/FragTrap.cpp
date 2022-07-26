/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:03:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/26 19:09:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "It is I " << _name << std::endl;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(const char *name)
{
	
}

FragTrap::FragTrap(FragTrap &newfrag)
{
	
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
FragTrap::~FragTrap(void)
{

}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
FragTrap	&FragTrap::operator=(const FragTrap &comp)
{
	
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	FragTrap::highFivesGuys()
{
	
}
