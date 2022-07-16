/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:16:34 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/17 00:11:45 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Weapon.hpp"
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define END "\33[0m"

int main()
{
	std::cout << YELLOW << "HumanA : Has a weapon upon being created\n"
		<< "HumanB : Does not have a weapon upon being created\n" << END;

	std::cout << GREEN << "\nCreating HumanA with a name and weapon :\n" << END;
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA	bob("Bob", club);
		bob.attack();
		std::cout << YELLOW << "Changing Bob's weapon\n" << END;
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << GREEN << "\nCreating HumanB with a name and adding a weapon :\n" << END;
	{
		Weapon	club = Weapon("crude spiked club");
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		std::cout << YELLOW << "Changing Jim's weapon\n" << END;
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << GREEN << "\nCreating HumanB with a name and no weapon :\n" << END;
	{
		Weapon	knife = Weapon("cooking knife");
		HumanB	moss("Moss");
		moss.attack();
		std::cout << YELLOW << "Giving Moss's weapon\n" << END;
		moss.setWeapon(knife);
		moss.attack();
	}
	std::cout << GREEN << "\nCreating HumanB without a name and no weapon :\n" << END;
	{
		HumanB	noname(NULL);
		noname.attack();
	}
	std::cout << GREEN << "\nCreating HumanA without a name but with a weapon :\n" << END;
	{
		Weapon	pan = Weapon("frying pan");
		HumanA	noname(NULL, pan);
		noname.attack();
	}
	std::cout << GREEN << "\nCreating HumanB with and a weapon which gets destroyed :\n" << END;
	{
		HumanB	roy("Roy");
		{
			Weapon	weapon("toaster");
			roy.setWeapon(weapon);
			roy.attack();
		}
		std::cout << YELLOW << "Deleted the reference weapon\n" << END;
		roy.attack();
	}
	return 0;
}