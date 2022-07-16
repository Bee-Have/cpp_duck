/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:11:26 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/16 22:34:27 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define END "\33[0m"

Zombie	* newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie		* zombie_stack;
	std::string	stack("Moss");
	std::string	heap("Roy");


	std::cout << RED <<" BZZZ.. START EXPERIMENT BZZZZZZZZ.\n\n" << END;

	std::cout << YELLOW << " CR-CREATING"<< CYAN << " STACK" << YELLOW
		<< " BZZ Z-ZZOMBIE :\n" << END;
	zombie_stack = newZombie(stack);
	std::cout << CYAN << " STACK" << GREEN << " ZOMBIE CRRRREATED BZZZZ\n" << END;
	
	std::cout << CYAN << " STACK" << YELLOW << " ZZ-ZOMBIE... SPEEEEEEAK :\n" << END;
	zombie_stack->announce();
	std::cout << YELLOW << " A-A-AGAINN :\n" << END;
	zombie_stack->announce();
	std::cout << GREEN << " SSUUUCCESSSSSSS\n" << END;

	std::cout << YELLOW << " DELETING" << CYAN <<" S-SSSTACK" << YELLOW
		<<" ZZZZOMBIIIIIIE :\n" << END;
	delete zombie_stack;
	std::cout << CYAN << " STACK " << GREEN << "BZZ-BZZZZT Z-Z-ZOMBIE DELETEEEEED\n" << END;

	std::cout << YELLOW <<"\n CRRRREATING BZZZ" << CYAN <<" HEAP" << YELLOW
		<< " BZZZZZ-ZOMBIIIE :\n" << END;
	randomChump(heap);
	std::cout << CYAN << " HEAP" << GREEN << " Z-ZZZ-ZZZZOMBIE CR-CRRRRR-CREATED\n" << END;
	std::cout << CYAN << " HEAP" << RED << " ZZ-ZZZOMBIE DIEDD.. FAILUUUUURE BZZZZ" << END << std::endl;

	std::cout << RED << "\n EXPERIMENT RESULT BZZZZ :\n" << END;
	std::cout << YELLOW << " BZZZ" << CYAN << " STACK " << YELLOW 
		<< "ZOMBIE STAY ALIVE UNTIL DESTROYED\n" << END;
	std::cout << CYAN << " HEAP " << YELLOW
		<< "ZZZ-ZZOMBIE BZZZ DIES AS SOON AS BZZZ IT LEAVES FFFFUNCTION\n" << END;
	return (0);
}
