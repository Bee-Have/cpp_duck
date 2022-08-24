/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:21:49 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 16:29:13 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
WrongCat::WrongCat(void): WrongAnimal()
{
	type.assign("WrongCat");
	std::cout << "Nyan " << BOLD << type << END << " has arrived" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy)
{
	std::cout << "Nyan " << BOLD << type << END << " has arrived" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
WrongCat::~WrongCat(void)
{
	std::cout << "Nyan " << BOLD << type << END << " is flying away (bye bye)" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
WrongCat	&WrongCat::operator=(const WrongCat &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	WrongCat::makeSound() const
{
	std::cout << "Nyan " << BOLD << type << END << " music in the background" << std::endl;
}
