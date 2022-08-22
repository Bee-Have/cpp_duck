/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:20:52 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 14:56:49 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Cat::Cat(void): Animal(), _brain(new Brain())
{
	type.assign("Cat");
	std::cout << "His Meowgesty has arrived (cat)" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
	_brain->set_ideas(cpy._brain->get_ideas());
	std::cout << "His Meowgesty has arrived (cat)" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Cat::~Cat(void)
{
	delete _brain;
	std::cout << "His Meowgesty is unimpressed and leaves (cat)" << std::endl;
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
	std::cout << "mreow (not barking, not barking at all)" << std::endl;
}
