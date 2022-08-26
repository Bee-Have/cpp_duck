/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:10:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/26 07:18:10 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Animal::Animal(void): type("Animal")
{
	std::cout << "An " << BOLD << type << END << " comes to life" << std::endl;
}

Animal::Animal(const Animal &cpy): type(cpy.type)
{
	std::cout << "An " << BOLD << type << END << " comes to life" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Animal::~Animal(void)
{
	std::cout << BOLD << type << END << " just died" << std::endl;
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
-----------------------------| ENCAPSULATION |----------------------------------
**/
std::string	Animal::getType(void) const
{
	return (type);
}
