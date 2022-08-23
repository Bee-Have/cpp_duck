/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:29:53 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/23 04:45:41 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <limits>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#define RED "\033[1;31m"
#define END "\33[0m"

int	main(void)
{
	// I suggest changing types of vars during correction
	// This way they can all be properly tested instead of having to many tests
	ScavTrap	Lucas("ldutriez");
	ScavTrap	Charles("chdespon");
	ClapTrap	Walter(Lucas);
	ScavTrap	Maxime;

	Walter.set_name("wluong");
	Maxime.set_name("mlormois");

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
		Maxime.guardGate();
		Charles.attack(Maxime.get_name());
		Walter.attack(Maxime.get_name());
		Maxime.takeDamage(Charles.get_attackdmg());
		Maxime.takeDamage(Charles.get_attackdmg());
		Maxime.guardGate();
		Maxime.takeDamage(Maxime.get_attackdmg());
		
	}

	std::cout << RED << "\nError tests :\n" << END;
	{
		Charles.set_hitpts(0);
		Lucas.set_attackdmg(1);
		Lucas.attack(Charles.get_name());
		Charles.takeDamage(Lucas.get_attackdmg());
		Charles.attack(Lucas.get_name());
		Lucas.set_energypts(0);
		Lucas.attack(Charles.get_name());
	}

	std::cout << RED << "\nWrong values tests :\n" << END;
	{
		Maxime.set_name("");
		Maxime.set_name(NULL);
		Walter.beRepaired(-2);
		Lucas.set_attackdmg(-42);
		Lucas.set_energypts(-1);
		Charles.set_hitpts(-1000);
		Charles.takeDamage(-99);
		Charles.set_hitpts(-1000);
		Charles.beRepaired(std::numeric_limits<unsigned int>::max());
	}

	std::cout << RED << "\nHeap assign tests :\n" << END;
	{
		char *name = new char[6];
		strcpy(name, "Hello");
		ClapTrap savage(name);
		delete[] name;
		ClapTrap bob(savage);
	}
	std::cout << std::endl;
	return (0);
}
