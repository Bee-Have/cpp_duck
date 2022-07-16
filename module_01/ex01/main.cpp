/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:16:08 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/16 22:31:10 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define END "\33[0m"

Zombie	* zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie		*Horde;

	std::cout << RED <<" BZZZ.. START EXPERIMENT BZZZZZZZZ.\n" << END;

	// create stack of 10
	std::cout << YELLOW << "\n CR-CREATTTING HORDE OF BZZZZZ" << CYAN
		<< "T-TEN" << YELLOW << " : \n" << END;
	Horde = zombieHorde(10, "Alpha");
	std::cout << YELLOW << " SP-SPEEEEAAAK\n" << END;
	for(int i = 0; i < 10; ++i)
	{
		std::cout << GREEN << "INDEX [" << Horde[i].get_index() << "] " << END;
		Horde[i].announce();
	}
	std::cout << YELLOW << " DE-DELETING HORDE OF " << CYAN << "T-TEN"
		<< YELLOW << " :\n" << END;
	delete[] Horde;
	std::cout  << GREEN << " BZZZZZZZZZ... SUCCESSSSSSSSSSS\n" << END;

	// create stack of max 20
	std::cout << YELLOW << "\n CR-CREATTTING HORDE OF BZZZZZ" << CYAN
		<< " TWENNNTY" << YELLOW << " : \n" << END;
	Horde = zombieHorde(20, "Beta");
	std::cout << YELLOW << " SP-SPEEEEAAAK\n" << END;
	for(int i = 0; i < 20; ++i)
	{
		std::cout << GREEN << "INDEX [" << Horde[i].get_index() << "] " << END;
		Horde[i].announce();
	}
	std::cout << YELLOW << " DE-DELETING HORDE OF " << CYAN << "TWENNNTY"
		<< YELLOW << " :\n" << END;
	delete[] Horde;
	std::cout  << GREEN << " BZZZZZZZZZ... SUCCESSSSSSSSSSS\n" << END;

	// create stack of 0
	std::cout << YELLOW << "\n CR-CREATTTING HORDE OF BZZZZZ" << CYAN
		<< " ZERO " << YELLOW << ":\n" << END;
	Horde = zombieHorde(0, "Gamma");
	std::cout << RED << "BZZ FORBIDDEN... BZZZZZ FAILUUUUURE\n" << END;

	// create stack of 1
	std::cout << YELLOW << "\n CR-CREATTTING HORDE OF BZZZZZ" << CYAN
		<< " ONE" << YELLOW << " :\n" << END;
	Horde = zombieHorde(1, "Delta");
	std::cout << YELLOW << " SP-SPEEEEAAAK\n" << END;
	Horde[0].announce();
	std::cout << YELLOW << "\n DE-DELETING HORDE OF " << CYAN << "ONE"
		<< YELLOW << " :\n" << END;
	delete[] Horde;
	std::cout  << GREEN << " BZZZZZZZZZ... SUCCESSSSSSSSSSS\n" << END;

	std::cout << RED << "\n EXPERIMENT RESULT BZZZZ :\n" << END << std::endl;
	
	return (0);
}
