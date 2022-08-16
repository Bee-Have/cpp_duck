/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:10:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 02:16:11 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Animal::Animal(void): type()
{
	std::cout << "An animal comes to life" << std::endl;
}

Animal::Animal(const Animal &cpy): type(cpy.type)
{
	std::cout << "An animal comes to life" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Animal::~Animal(void)
{
	std::cout << "An animal just died" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Animal	&Animal::operator=(const Animal &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	Animal::makeSound(void) const
{
	std::cout << "Random Animal sound" << std::endl;
}

/**
-----------------------------| ENCAPSULATION |----------------------------------
**/
std::string	Animal::getType(void) const
{
	return (type);
}
