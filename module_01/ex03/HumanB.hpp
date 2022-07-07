/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 17:41:24 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB();
		~HumanB();
		void		attack();
		
		Weapon		get_weapon() const;
		void		set_weapon(Weapon neweapon);
		std::string	get_name() const;
		void		set_name(std::string newname);

	private :
		Weapon		_weapon;
		std::string	name;
};