/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:19:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 16:51:06 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class	Weapon
{
	public :
		Weapon(std::string newweapon);
		~Weapon();
		std::string	getType() const;
		void		setType(std::string newtype);
	private :
		std::string	type;
};