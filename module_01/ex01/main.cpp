/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:16:08 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 12:49:36 by amarini-         ###   ########.fr       */
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
	std::string	name;

	std::cout << RED <<" BZZZ.. START EXPERIMENT BZZZZZZZZ.\n\n" << END;
	
	std::cout << YELLOW << "CR-CREATTTING STACK OF BZZZZZ BZ" << END << RED << " ZERO :\n";
	name.copy("Alpha", 5, 0);
	Horde = zombieHorde(0, "Alpha");
	
	// create stack of 0
	// create stack of 1
	// create stack of 5
	// create stack of 10
	// create stack of max int + 1
	
	// dont forget to delete all the allocated memory
	
	std::cout << RED << "\n EXPERIMENT RESULT BZZZZ :\n" << END;
	
	return (0);
}
