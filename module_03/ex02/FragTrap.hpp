/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:55:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/23 04:50:34 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	// Constructor
		FragTrap();
		FragTrap(const char *name);
		FragTrap(FragTrap &newfrag);
	// Destructor
		~FragTrap();
	// Operator
		FragTrap	&operator=(const FragTrap &newfrag);
	
	// Methods
		void	highFivesGuys();
};
