/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:39:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/25 19:57:25 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/

ClapTrap::ClapTrap(void): _name("NoName"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{}

ClapTrap::ClapTrap(const char *name): _name(name),  _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{}

ClapTrap::ClapTrap(ClapTrap &cpy): _name(cpy._name), _hit_pts(cpy._hit_pts), _energy_pts(cpy._energy_pts), _attack_dmg(cpy._attack_dmg)
{}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
ClapTrap::~ClapTrap(void)
{}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
ClapTrap	&ClapTrap::operator=(const ClapTrap &assign)
{
	if (this != &assign)
	{
		this->_name.assign(assign._name);
		this->_hit_pts = assign._hit_pts;
		this->_energy_pts = assign._energy_pts;
		this->_attack_dmg = assign._attack_dmg;
	}
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	ClapTrap::attack(const std::string& target)
{
	if (_hit_pts <= 0)
		std::cerr << _name << " does not have enough health to attack" << std::endl;
	else if (_hit_pts <= 0)
		std::cerr << _name << " does not have enough energy to attack" << std::endl;
	else
	{
		_energy_pts -= 1;
		std::cout << _name << " attacks " << target
			<< ", " << target << " takes " << _attack_dmg << " dammage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_pts > 0)
	{
		std::cout << _name << " loses " << amount << " health, ";
		if (amount > _hit_pts)
			amount = _hit_pts;
		_hit_pts -= amount;
		std::cout << _name << " now has " << _hit_pts << " health points" << std::endl;
	}
	else
		std::cerr << _name << " cannot lose anymore health points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_pts <= 0)
		std::cerr << _name << " does not have enough energy to be repaired" << std::endl;
	else
	{
		_energy_pts -= 1;
		_hit_pts += amount;
		std::cout << _name << " regains " << amount << " health points" << std::endl;
	}
}

/**
-------------------------------| ACCESSORS |------------------------------------
**/
std::string	ClapTrap::get_name(void) const
{
	return (_name);
}

void	ClapTrap::set_name(const char *new_name)
{
	_name.assign(new_name);
}

unsigned int	ClapTrap::get_hitpts(void) const
{
	return (_hit_pts);
}

void	ClapTrap::set_hitpts(unsigned int new_hitpts)
{
	_hit_pts = new_hitpts;
}

unsigned int	ClapTrap::get_energypts(void) const
{
	return (_energy_pts);
}

void	ClapTrap::set_energypts(unsigned int new_energypts)
{
	_energy_pts = new_energypts;
}

unsigned int	ClapTrap::get_attackdmg(void) const
{
	return (_attack_dmg);
}

void	ClapTrap::set_attackdmg(unsigned int new_attackdmg)
{
	_attack_dmg = new_attackdmg;
}
