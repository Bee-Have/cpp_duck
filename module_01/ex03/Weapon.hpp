/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:19:32 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 17:31:10 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Weapon
{
	public :
		Weapon();
		~Weapon();
		std::string	getType() const;
		void		setType(std::string newtype);
	private :
		std::string	type;
};