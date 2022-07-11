/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 18:00:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(const char *newname, Weapon &newweapon);
		~HumanA();

		void		attack();
		
		Weapon		get_weapon() const;
		void		setWeapon(Weapon &neweapon);
		std::string	get_name() const;
		void		set_name(const char *newname);

	private :
		Weapon		&_weapon;
		std::string	name;
};