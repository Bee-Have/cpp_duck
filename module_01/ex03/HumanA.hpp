/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 16:50:50 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string newname, Weapon &newweapon);
		~HumanA();

		void		attack();
		
		Weapon		get_weapon() const;
		void		setWeapon(Weapon &neweapon);
		std::string	get_name() const;
		void		set_name(std::string newname);

	private :
		Weapon		&_weapon;
		std::string	name;
};