/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:20:52 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/23 06:02:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Dog::Dog(void): Animal()
{
	type.assign("Dog");
	std::cout << "Hello dis is " << BOLD << type << END << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Hello dis is " << BOLD << type << END << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Dog::~Dog(void)
{
	std::cout << "Best boy" << BOLD << type << END << " is departing" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Dog	&Dog::operator=(const Dog &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	Dog::makeSound(void) const
{
	std::cout << BOLD << type << END << " bark BARK" << std::endl;
}
