/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 18:00:23 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(const char *newname);
		~HumanB();
		void		attack();
		
		Weapon		*get_weapon() const;
		void		setWeapon(Weapon &newweapon);
		std::string	get_name() const;
		void		set_name(const char *newname);

	private :
		Weapon		*_weapon;
		std::string	name;
};