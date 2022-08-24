/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 07:08:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 16:32:00 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongDog.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
WrongDog::WrongDog(void): WrongAnimal()
{
	type.assign("WrongDog");
	std::cout << BOLD << type << END << ": Ed...Ward... Nii-san..." << std::endl;
}

WrongDog::WrongDog(const WrongDog &cpy): WrongAnimal(cpy)
{
	std::cout << BOLD << type << END << ": Ed...Ward... Nii-san..." << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
WrongDog::~WrongDog(void)
{
	std::cout << BOLD << type << END << ": Go...Gomene.. nii-san" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
WrongDog	&WrongDog::operator=(const WrongDog &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	WrongDog::makeSound(void) const
{
	std::cout << BOLD << type << END << ": Aso...boo... Asoboo... Aso..boo" << std::endl;
}
