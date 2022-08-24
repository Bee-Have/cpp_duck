/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:20:52 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/25 01:50:55 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Cat::Cat(void): Animal(), _brain(new Brain())
{
	type.assign("Cat");
	std::cout << "His Meowgesty the " << BOLD << type << END << " has arrived" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy), _brain(new Brain())
{
	std::cout << "type: "<< type << "\n";
	_brain->set_ideas(cpy._brain->get_ideas());
	std::cout << "His Meowgesty the " << BOLD << type << END << " has arrived" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Cat::~Cat(void)
{
	delete _brain;
	std::cout << "His Meowgesty the " << BOLD << type << END << " is unimpressed and leaves" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Cat	&Cat::operator=(const Cat &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	this->_brain->set_ideas(assign._brain->get_ideas());
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	Cat::makeSound(void) const
{
	std::cout << "mreow (" << BOLD << type << END << "! not barking!! not barking at all!)" << std::endl;
}

/**
-----------------------------| ENCAPSULATION |----------------------------------
**/
Brain	*Cat::get_brain(void) const
{
	return (this->_brain);
}

void	Cat::set_brain(const Brain *cpy)
{
	this->_brain->set_ideas(cpy->get_ideas());
}
