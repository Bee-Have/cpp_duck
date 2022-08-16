/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:21:49 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 04:01:31 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
WrongCat::WrongCat(void): WrongAnimal()
{
	type.assign("WrongCat");
	std::cout << "Nyan cat has arrived" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
	std::cout << "Nyan cat has arrived" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
WrongCat::~WrongCat(void)
{
	std::cout << "Nyan cat is flying away (bye bye)" << std::endl;
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
	std::cout << "Nyan cat music in the background" << std::endl;
}
