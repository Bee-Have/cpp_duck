/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:15:17 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 10:18:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Brain::Brain(void): ideas()
{
	std::cout << "I am now aware" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "I am now aware" << std::endl;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Brain::~Brain(void)
{
	std::cout << "Brain is dying" << std::endl;
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Brain	&Brain::operator=(const Brain &assign)
{
	for (int i = 0; i < 100; ++i)
		if (this->ideas[i].compare(assign.ideas[i]) != 0)
			this->ideas[i].assign(assign.ideas[i]);
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
const std::string	*Brain::get_ideas(void) const
{
	return (ideas);
}

const std::string	&Brain::get_ideas(int index) const
{
	if (index < 0)
		return (ideas[0]);
	if (index > 99)
		return (ideas[99]);
	return (ideas[index]);
}

void	Brain::set_ideas(std::string *cpy)
{
	for (int i = 0; i < 100; ++i)
		if (this->ideas[i].compare(cpy[i]) != 0)
			this->ideas[i].assign(cpy[i]);
}

void	Brain::set_ideas(int index, std::string cpy)
{
	if (index < 0 || index > 99)
		std::cout << "Index is out of range, cannot assign this value" << std::endl;
	else if (this->ideas[index].compare(cpy) != 0)
		this->ideas[index].assign(cpy);
}
