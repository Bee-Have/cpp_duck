/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 07:08:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 07:22:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongDog.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
WrongDog::WrongDog(void): WrongAnimal()
{
	type.assign("WrongDog");
	std::cout << "Ed...Ward... Nii-san..." << std::endl;
}

WrongDog::WrongDog(const WrongDog &cpy): WrongAnimal(cpy)
{
	std::cout << "Ed...Ward... Nii-san..." << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
WrongDog::~WrongDog(void)
{
	std::cout << "Go...Gomene.. nii-san" << std::endl;
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
	std::cout << "Aso...boo... Asoboo... Aso..boo" << std::endl;
}
