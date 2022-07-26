/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:54:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/26 13:11:39 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	// Constructor
		ScavTrap();
		ScavTrap(const char *newname);
		ScavTrap(ScavTrap &cpy);
	// Assignment Operator
		ScavTrap	&operator=(const ScavTrap &newscav);
	// Destructor
		~ScavTrap();
	
	// Member Functions
	void	attack(const std::string &target);
	void	guardGate();

	// Accessors
	bool	get_guard_gate() const;
	void	set_guard_gate(bool state);

	protected:
		bool	_guard_gate;
};