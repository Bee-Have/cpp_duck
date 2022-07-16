/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:44:15 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/16 22:16:11 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// here the zombie will only exist in the scope of the function.
// the moment the function is over, the zombie is destroyed automatically
void	randomChump(std::string name)
{
	Zombie	zombie;

	zombie.set_name(name);
	zombie.announce();
}
