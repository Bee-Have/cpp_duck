/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:10:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/02 19:27:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Animal::Animal(): type(NULL)
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
Animal::~Animal()
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
void	Animal::makeSound() const
{
	std::cout << "Random Animal sound" << std::endl;
}

/**
-----------------------------| ENCAPSULATION |----------------------------------
**/
std::string	Animal::get_type(void) const
{
	return (type);
}

void	Animal::set_type(std::string &cpy)
{
	type.assign(cpy);
}
