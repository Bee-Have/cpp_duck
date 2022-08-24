/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:20:52 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 20:10:16 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Dog::Dog(void): Animal()
{
	type.assign("Dog");
	std::cout << "Hello dis is dog" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Hello dis is dog" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Dog::~Dog(void)
{
	std::cout << "Best boy is departing" << std::endl;
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
	std::cout << "bark BARK" << std::endl;
}

/**
-----------------------------| ENCAPSULATION |----------------------------------
**/
Brain	*Dog::get_brain(void) const
{
	return (this->_brain);
}

void	Dog::set_brain(const Brain *cpy)
{
	this->_brain->set_ideas(cpy->get_ideas());
}
