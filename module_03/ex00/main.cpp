/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:19:31 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/26 15:29:45 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#define RED "\033[1;31m"
#define END "\33[0m"

int	main(void)
{
	ClapTrap	Charles("chdespon");
	ClapTrap	Lucas("ldutriez");
	
	std::cout << RED << "\nBasic tests :\n" << END;
	{
		Lucas.set_hitpts(50);
		Charles.set_attackdmg(3);
		Charles.attack(Lucas.get_name());
		Lucas.takeDamage(Charles.get_attackdmg());
		Charles.set_attackdmg(100);
		Charles.attack(Lucas.get_name());
		Lucas.takeDamage(Charles.get_attackdmg());
		Lucas.attack(Lucas.get_name());
		Lucas.takeDamage(Lucas.get_attackdmg());
	}
	std::cout << RED << "\nError tests :\n" << END;
	{
		ClapTrap	Unknown("Random Person");

		Charles.set_hitpts(0);
		Lucas.set_attackdmg(1);
		Lucas.attack(Charles.get_name());
		Charles.takeDamage(Lucas.get_attackdmg());
		Charles.attack(Lucas.get_name());
		Lucas.set_energypts(0);
		Lucas.attack(Charles.get_name());
		Unknown.set_name("");
	}

	return (0);
}
