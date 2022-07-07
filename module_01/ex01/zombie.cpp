/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:28:38 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/07 12:29:28 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::get_name(void) const
{
	return (name);
}

void		Zombie::set_name(std::string new_name)
{
	name.assign(new_name);
}

int	Zombie::get_index(void) const
{
	return (_index);
}

void	Zombie::set_index(int index)
{
	_index = index;
}

void	Zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << get_name() << ": IZ DED" << std::endl;
	set_index(0);
}

Zombie::Zombie(void)
{
	std::cout << "I AM ALIIIIIIIIIIIIIVE" << std::endl;
}
