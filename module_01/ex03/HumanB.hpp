/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:22:04 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/08 19:34:48 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string newname);
		~HumanB();
		void		attack();
		
		Weapon		*get_weapon() const;
		void		set_weapon(Weapon *newweapon);
		std::string	get_name() const;
		void		set_name(std::string newname);

	private :
		Weapon		*_weapon;
		std::string	name;
};