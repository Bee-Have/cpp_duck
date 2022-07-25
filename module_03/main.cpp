/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:19:31 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/25 20:01:47 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Charles("Charles");
	ClapTrap	Lucas("Lucas");
	ClapTrap	Unknown;
	
	std::cout << "Basic tests :\n";
	{
		Lucas.set_hitpts(50);
		Charles.attack(Lucas.get_name());
		Lucas.takeDamage(Charles.get_attackdmg());
		Charles.set_attackdmg(100);
		Charles.attack(Lucas.get_name());
		Lucas.takeDamage(Charles.get_attackdmg());
	}
	std::cout << "\nError tests :\n";
	{
		Charles.set_hitpts(0);
		Lucas.set_attackdmg(1);
		Lucas.attack(Charles.get_name());
		Charles.takeDamage(Lucas.get_attackdmg());
		Lucas.set_energypts(0);
	}

	return (0);
}
