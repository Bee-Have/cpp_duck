/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:03:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/27 13:07:25 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#define YELLOW "\033[1;33m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << YELLOW << "It is I " << _name << END << std::endl;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(const char *name): ClapTrap(name)
{
	std::cout << YELLOW << "It is I " << _name << END << std::endl;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(FragTrap &newfrag): ClapTrap(newfrag)
{
	std::cout << YELLOW << "It is I " << _name << END << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
FragTrap::~FragTrap(void)
{
	std::cout << YELLOW << _name << " out !" << END << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
FragTrap	&FragTrap::operator=(const FragTrap &newfrag)
{
	if (this != &newfrag)
	{
		this->_name.assign(newfrag._name);
		this->_hit_pts = newfrag._hit_pts;
		this->_energy_pts = newfrag._energy_pts;
		this->_attack_dmg = newfrag._attack_dmg;
	}
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	FragTrap::highFivesGuys(void)
{
	std::cout << _name << " is requesting the HIGH FIVE" << std::endl;
}
