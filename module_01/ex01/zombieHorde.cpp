/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:50:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 12:42:22 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define RED "\033[1;31m"
#define END "\33[0m"

Zombie	* zombieHorde(int N, std::string name)
{
	Zombie	* Horde;

	if (N <= 0)
		std::cout << RED << "Braiiinnzz TRANSLATING... \"zero or less is forbidden\"" << END << std::endl;
	else if (N > 2147483647)
		std::cout << RED << "Braaaaaaainz TRANSLATING... \"over max int is forbidden\"" << END << std::endl;
	Horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		Horde[i].set_name(name);
		Horde[i].set_index(i);
	}
}
