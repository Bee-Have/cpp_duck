/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:39:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 06:04:48 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#define YELLOW "\033[33m"
#define YB "\033[1;33m"
#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/

ClapTrap::ClapTrap(void): _name("NoName"), _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << YB << _name << END
		<< YELLOW << " has entered the Arena" << END << std::endl;
}

ClapTrap::ClapTrap(const char *name): _hit_pts(10), _energy_pts(10), _attack_dmg(0)
{
	if (name == NULL || name[0] == '\0')
	{
		std::cout << "Empty name is not allowed. It will be changed to :"
			<< BOLD << " NoName" << END << std::endl;
		_name.assign("NoName");
	}
	else
		_name.assign(name);
	std::cout << YB << _name << END
		<< YELLOW << " has entered the Arena" << END << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &cpy): _name(cpy._name), _hit_pts(cpy._hit_pts), _energy_pts(cpy._energy_pts), _attack_dmg(cpy._attack_dmg)
{
	std::cout << YB << _name << END 
		<< YELLOW << " has entered the Arena" << END << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
ClapTrap::~ClapTrap(void)
{
	std::cout << YB << _name << END
		<< YELLOW << " is withdrawing from the fight" << END << std::endl;
}

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
	if (_energy_pts == 0)
		std::cout << BOLD << _name << END
			<< " does not have enough energy to attack" << std::endl;
	else
	{
		_energy_pts -= 1;
		std::cout << BOLD << _name  << END << " attacks " << target;
		if (_attack_dmg == 0)
			std::cout << ", but makes no damage" << std::endl;
		else
			std::cout << ", " << target << " takes " << _attack_dmg << " damage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		std::cout << BOLD << _name << END << " takes no damage" << std::endl;
	if (_hit_pts == 0)
		std::cout << BOLD << _name << END << " cannot lose anymore health points" << std::endl;
	if (_hit_pts > 0 && amount > 0)
	{
		std::cout << BOLD << _name << END << " loses " << amount << " health, ";
		if (amount > _hit_pts)
			amount = _hit_pts;
		_hit_pts -= amount;
		std::cout << BOLD << _name << END << " has now " << _hit_pts << " health points" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_pts == 0)
		std::cout << BOLD << _name << END << " does not have enough energy to be repaired" << std::endl;
	else
	{
		_energy_pts -= 1;
		_hit_pts += amount;
		if (amount == 0)
			std::cout << BOLD << _name << END << " regains no health" << std::endl;
		else
			std::cout << BOLD << _name << END << " regains " << amount << " health points" << std::endl;
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
	if (new_name == NULL || new_name[0] == '\0')
	{
		std::cout << "Empty name is not allowed. It will be changed to :"
			<< BOLD << " NoName" << END << std::endl;
		_name.assign("NoName");
		return ;
	}
	if (_name.compare(new_name) == 0)
		return ;
	else
	{
		std::cout << "But wait... " << BOLD << _name << END 
			<< " was in fact " << new_name << " all along" << std::endl;
		_name.assign(new_name);
	}
}

unsigned int	ClapTrap::get_hitpts(void) const
{
	return (_hit_pts);
}

void	ClapTrap::set_hitpts(unsigned int new_hitpts)
{
	if (new_hitpts < 0)
	{
		std::cout << BOLD << _name << END
			<< "'s health points cannot be negative" << std::endl;
		return ;
	}
	if (_hit_pts == new_hitpts)
		return ;
	std::cout << "Oh no... " << BOLD << _name << END
		<< "'s health is now " << new_hitpts << std::endl;
	_hit_pts = new_hitpts;
}

unsigned int	ClapTrap::get_energypts(void) const
{
	return (_energy_pts);
}

void	ClapTrap::set_energypts(unsigned int new_energypts)
{
	if (new_energypts < 0)
	{
		std::cout << BOLD << _name << END << "'s energy cannot be negative" << std::endl;
		return ;
	}
	if (_energy_pts == new_energypts)
		return ;
	std::cout << BOLD << _name << END
		<< " takes a few deep breaths and his energy is now at " << new_energypts << std::endl;
	_energy_pts = new_energypts;
}

unsigned int	ClapTrap::get_attackdmg(void) const
{
	return (_attack_dmg);
}

void	ClapTrap::set_attackdmg(unsigned int new_attackdmg)
{
	if (new_attackdmg < 0)
	{
		std::cout << BOLD << _name << END << "'s damages cannot be negative" << std::endl;
		return ;
	}
	if (_attack_dmg == new_attackdmg)
		return ;
	std::cout << BOLD << _name << END
		<< " unleashes their true power and now makes " << new_attackdmg << " damage" << std::endl;
	_attack_dmg = new_attackdmg;
}
