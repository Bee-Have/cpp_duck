/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:50:51 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/16 22:37:26 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	* zombieHorde(int N, std::string name)
{
	Zombie	* Horde;

	if (N <= 0)
		std::cout << "zzzero or lezz iz brainzzz" << std::endl;
	Horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		Horde[i].set_name(name);
		Horde[i].set_index(i);
	}
	return (Horde);
}
