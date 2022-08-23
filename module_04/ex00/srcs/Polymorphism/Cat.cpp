/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:20:52 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/23 06:06:14 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Cat::Cat(void): Animal()
{
	type.assign("Cat");
	std::cout << "His Meowgesty the " << BOLD << type << END << " has arrived" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	std::cout << "His Meowgesty the " << BOLD << type << END << " has arrived" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Cat::~Cat(void)
{
	std::cout << "His Meowgesty the " << BOLD << type << END << " is unimpressed and leaves" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Cat	&Cat::operator=(const Cat &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	Cat::makeSound() const
{
	std::cout << "mreow (" << BOLD << type << END << "! not barking!! not barking at all!)" << std::endl;
}
