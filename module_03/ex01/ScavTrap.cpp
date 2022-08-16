/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:21:09 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 06:10:05 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

#define YELLOW "\033[33m"
#define YB "\033[1;33m"
#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << YB << _name << END
		<< YELLOW << " : new challenger has arrived" << END << std::endl;
	_guard_gate = false;
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
}

ScavTrap::ScavTrap(const char *newname): ClapTrap(newname)
{
	std::cout << YB << _name << END
		<< YELLOW << " : new challenger has arrived" << END << std::endl;
	_guard_gate = false;
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap &cpy): ClapTrap(cpy)
{
	std::cout << YB << _name << END
		<< YELLOW << " : new challenger has arrived" << END << std::endl;
	this->_guard_gate = cpy._guard_gate;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
ScavTrap::~ScavTrap(void)
{
	std::cout << YB << _name << END
		<< YELLOW << " : challenger left" << END << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
ScavTrap	&ScavTrap::operator=(const ScavTrap &newscav)
{
	if (this != &newscav)
	{
		this->_name.assign(newscav._name);
		this->_hit_pts = newscav._hit_pts;
		this->_energy_pts = newscav._energy_pts;
		this->_attack_dmg = newscav._attack_dmg;
		this->_guard_gate = newscav._guard_gate;
	}
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	ScavTrap::attack(const std::string &target)
{
	if (_hit_pts == 0)
		std::cout << BOLD << _name << END << " has no health "
			<< BOLD << _name << END << " can't attack" << std::endl;
	else if (_energy_pts == 0)
		std::cout << BOLD << _name << END << " has no energy "
			<< BOLD <<  _name << END << " can't attack" << std::endl;
	else
	{
		_energy_pts -= 1;
		std::cout << BOLD << _name << END << " aggros " << target;
		if (_attack_dmg == 0)
			std::cout << ", but is too weak to do damage" << std::endl;
		else
			std::cout << ", " << target << " loses " << _attack_dmg << " health" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (_hit_pts == 0 || _energy_pts == 0)
	{
		if (_hit_pts == 0)
			std::cout << BOLD << _name << END << " has no health ";
		else if (_hit_pts == 0)
			std::cout << BOLD << _name << END << " has no energy ";
		std::cout << BOLD << _name << END << " can't change guard" << std::endl;
		return ;
	}
	_guard_gate = !_guard_gate;
	if (_guard_gate == true)
		std::cout << BOLD << _name << END << " is guarding" << std::endl;
	else
		std::cout << BOLD << _name << END << " stops guarding" << std::endl;
}

/**
-------------------------------| ACCESSORS |------------------------------------
**/
bool	ScavTrap::get_guard_gate(void) const
{
	return (_guard_gate);
}
