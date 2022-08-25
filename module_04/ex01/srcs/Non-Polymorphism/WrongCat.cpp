/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:21:49 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/25 05:29:20 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
WrongCat::WrongCat(void): WrongAnimal(), _brain(new Brain())
{
	type.assign("WrongCat");
	std::cout << "Nyan " << BOLD << type << END << " has arrived" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy), _brain(new Brain())
{
	_brain->set_ideas(cpy._brain->get_ideas());
	std::cout << "Nyan " << BOLD << type << END << " has arrived" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
WrongCat::~WrongCat(void)
{
	delete _brain;
	std::cout << "Nyan " << BOLD << type << END << " is flying away (bye bye)" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
WrongCat	&WrongCat::operator=(const WrongCat &assign)
{
	if (this->type.compare(assign.type) != 0)
		this->type.assign(assign.type);
	this->_brain->set_ideas(assign._brain->get_ideas());
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	WrongCat::makeSound() const
{
	std::cout << "Nyan " << BOLD << type << END << " music in the background" << std::endl;
}

/**
-----------------------------| ENCAPSULATION |----------------------------------
**/
Brain	*WrongCat::get_brain(void) const
{
	return (this->_brain);
}

void	WrongCat::set_brain(const Brain *cpy)
{
	this->_brain->set_ideas(cpy->get_ideas());
}
