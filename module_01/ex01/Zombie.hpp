/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:27:17 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 16:50:35 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	private:
		std::string	name;
		int			_index;

	public:
		Zombie();
		~Zombie();

		// Zombie	* zombieHorde(int N, std::string name);
		void	announce(void);

		std::string	get_name(void) const;
		void		set_name(std::string new_name);
		int			get_index(void) const;
		void		set_index(int index);
};
