/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:03:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/23 01:08:17 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#define YELLOW "\033[33m"
#define YB "\033[1;33m"
#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << YELLOW << "It is I " << YB << _name << END << std::endl;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(const char *name): ClapTrap(name)
{
	std::cout << YELLOW << "It is I " << YB << _name << END << std::endl;
	_hit_pts = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(FragTrap &newfrag): ClapTrap(newfrag)
{
	std::cout << YELLOW << "It is I " << YB << _name << END << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
FragTrap::~FragTrap(void)
{
	std::cout << YB << _name << END << YELLOW << " out !" << END << std::endl;
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
	if (_hit_pts == 0 || _energy_pts == 0)
	{
		std::cout << BOLD << _name << END << " can't high five with";
		if (_hit_pts == 0)
			std::cout << " no health ";
		else if (_hit_pts == 0)
			std::cout << " no energy ";
		std::cout << std::endl;
		return ;
	}
	std::cout << BOLD << _name << END << " is requesting the HIGH FIVE" << std::endl;
}
