/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:29:53 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/26 16:07:33 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#define RED "\033[1;31m"
#define END "\33[0m"

int	main(void)
{
	ClapTrap	Charles("chdespont");
	ScavTrap	Lucas("ldutriez");
	ScavTrap	Albator("amarini-");
	
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

	std::cout << RED << "\nGuard Gate tests\n" << END;
	{
		Albator.guardGate();
		Charles.attack(Albator.get_name());
		Lucas.attack(Albator.get_name());
		Albator.takeDamage(Charles.get_attackdmg());
		Albator.takeDamage(Charles.get_attackdmg());
		Albator.guardGate();
		Albator.takeDamage(Albator.get_attackdmg());
		
	}

	std::cout << RED << "\nError tests :\n" << END;
	{
		Charles.set_hitpts(0);
		Lucas.attack(Charles.get_name());
		Charles.takeDamage(Lucas.get_attackdmg());
		Charles.attack(Lucas.get_name());
		Lucas.set_energypts(0);
		Lucas.attack(Charles.get_name());
	}

	std::cout << RED << "\nWrong values tests :\n" << END;
	{
		Albator.set_name("");
		Albator.set_name(NULL);
		Albator.beRepaired(-2);
		Lucas.set_attackdmg(-42);
		Lucas.set_energypts(-1);
		Charles.set_hitpts(-1000);
		Charles.takeDamage(-99);
	}

	return (0);
}
