/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:21:09 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/26 16:50:12 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << _name << " : new challenger has arrived" << std::endl;
	_guard_gate = false;
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
}

ScavTrap::ScavTrap(const char *newname): ClapTrap(newname)
{
	std::cout << _name << " : new challenger has arrived" << std::endl;
	_guard_gate = false;
	_hit_pts = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap &cpy): ClapTrap(cpy)
{
	std::cout << _name << " : new challenger has arrived" << std::endl;
	this->_guard_gate = cpy._guard_gate;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
ScavTrap::~ScavTrap(void)
{
	std::cout << _name << " : challenger left" << std::endl;
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
		std::cerr << _name << " has no health " << _name << " can't attack" << std::endl;
	else if (_energy_pts == 0)
		std::cerr << _name << " has no energy " << _name << " can't attack" << std::endl;
	else
	{
		_energy_pts -= 1;
		std::cout << _name << " aggros " << target;
		if (_attack_dmg == 0)
			std::cout << ", but is too weak to do damage" << std::endl;
		else
			std::cout << ", " << target << " loses " << _attack_dmg << " health" << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_guard_gate == true)
	{
		std::cout << _name << " is guarding. " << _name << " can't take damage" << std::endl;
		return ;
	}
	if (amount == 0)
		std::cout << _name << " takes no damage" << std::endl;
	if (_hit_pts == 0)
		std::cerr << _name << " cannot lose anymore health points" << std::endl;
	if (_hit_pts > 0 && amount != 0)
	{
		std::cout << _name << " loses " << amount << " health, ";
		if (amount > _hit_pts)
			amount = _hit_pts;
		_hit_pts -= amount;
		std::cout << _name << " has now " << _hit_pts << " health points" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	_guard_gate = !_guard_gate;
	if (_guard_gate == true)
		std::cout << _name << " is guarding" << std::endl;
	else
		std::cout << _name << " stops guarding" << std::endl;
}

/**
-------------------------------| ACCESSORS |------------------------------------
**/
bool	ScavTrap::get_guard_gate(void) const
{
	return (_guard_gate);
}
