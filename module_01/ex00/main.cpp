/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:11:26 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/06 15:24:15 by amarini-         ###   ########.fr       */
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

	std::cout << YELLOW << " CR-CREATING" << END << CYAN << " STACK" << END << YELLOW << " BZZ Z-ZZOMBIE :\n" << END;
	zombie_stack = newZombie(stack);
	std::cout << CYAN << " STACK" << END << GREEN << " ZOMBIE CRRRREATED BZZZZ\n" << END;
	
	std::cout << CYAN << " STACK" << END << YELLOW << " ZZ-ZOMBIE... SPEEEEEEAK :\n" << END;
	zombie_stack->announce();
	std::cout << YELLOW << " A-A-AGAINN :\n" << END;
	zombie_stack->announce();
	std::cout << GREEN << " SSUUUCCESSSSSSS\n" << END;

	std::cout << YELLOW << " DELETING" << END << CYAN <<" S-SSSTACK"<< END << YELLOW <<" ZZZZOMBIIIIIIE :\n" << END;
	delete zombie_stack;
	std::cout << CYAN << " STACK " << END << GREEN << "BZZ-BZZZZT Z-Z-ZOMBIE DELETEEEEED\n" << END;

	std::cout << YELLOW <<"\n CRRRREATING BZZZ" << END << CYAN <<" HEAP" << END << YELLOW << " BZZZZZ-ZOMBIIIE :\n" << END;
	randomChump(heap);
	std::cout << CYAN << " HEAP" << END << GREEN << " Z-ZZZ-ZZZZOMBIE CR-CRRRRR-CREATED\n" << END;
	std::cout << CYAN << " HEAP" << END << RED << " ZZ-ZZZOMBIE DIEDD.. FAILUUUUURE BZZZZ" << END << std::endl;

	std::cout << RED << "\n EXPERIMENT RESULT BZZZZ :\n" << END;
	std::cout << YELLOW << " BZZZ" << END << CYAN << " STACK " << END << YELLOW << "ZOMBIE STAY ALIVE UNTIL DESTROYED\n" << END;
	std::cout << CYAN << " HEAP " << END << YELLOW << "ZZZ-ZZOMBIE BZZZ DIES AS SOON AS BZZZ IT LEAVES FFFFUNCTION\n" << END;
}
