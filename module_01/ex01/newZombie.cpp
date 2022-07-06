/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:44:18 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/06 13:23:51 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// allocate memory for a zombie. 
// here the zombie will have to be "killed" manually
// if the zombie is not "killed" there will be leaks
// for every "new", you need a "delete"
Zombie	* newZombie(std::string name)
{
	Zombie	* zombie;

	zombie = new Zombie;
	zombie->set_name(name);
	return (zombie);
}
