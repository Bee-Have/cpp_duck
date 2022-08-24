/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:56:00 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 16:29:54 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
WrongAnimal::WrongAnimal(void): type("WrongAnimal")
{
	std::cout << "A VERY WRONG " << BOLD << type << END << " has arrived" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy): type(cpy.type)
{
	std::cout << "A VERY WRONG " << BOLD << type << END << " has arrived" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "That abonimation " << BOLD << type << END << " finally died" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	WrongAnimal::makeSound(void) const
{
	std::cout << BOLD << type << END << " abomination groans" << std::endl;
}

/**
-----------------------------| ENCAPSULATION |----------------------------------
**/
std::string	WrongAnimal::getType(void) const
{
	return (type);
}
