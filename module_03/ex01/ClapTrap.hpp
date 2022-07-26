/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:57:58 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/26 12:46:24 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class ClapTrap
{
	public:
	// Constructors :
		ClapTrap();
		ClapTrap(const char *name);
		ClapTrap(ClapTrap &cpy);
	// Destructor :
		~ClapTrap();
	// Assignment operator (=) :
		ClapTrap	&operator=(const ClapTrap &assign);

	// Member functions :
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	// Accessors :
		std::string		get_name(void) const;
		void			set_name(const char *new_name);
		unsigned int	get_hitpts(void) const;
		void			set_hitpts(unsigned int new_hitpts);
		unsigned int	get_energypts(void) const;
		void			set_energypts(unsigned int new_energypts);
		unsigned int	get_attackdmg(void) const;
		void			set_attackdmg(unsigned int 	new_attackdmg);

	protected:
		std::string		_name;
		unsigned int	_hit_pts;
		unsigned int	_energy_pts;
		unsigned int	_attack_dmg;
};
