/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:50:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 13:38:02 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define RED "\033[1;31m"
#define END "\33[0m"

Zombie	* zombieHorde(int N, std::string name)
{
	Zombie	* Horde;

	if (N <= 0)
		std::cout << RED << "zzzero or lezz iz brainzzz" << END << std::endl;
	Horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		Horde[i].set_name(name);
		Horde[i].set_index(i);
	}
	return (Horde);
}
