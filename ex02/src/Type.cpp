/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:58:06 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/01 15:26:13 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Type: A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Type: B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Type: C\n";
}

void	identify(Base &p)
{
	try
	{
		A	&type_a = dynamic_cast<A&>(p);
		std::cout << "Type: A\n";
		(void)type_a;
		return ;
	}
	catch(const std::exception& e)
	{}
	try
	{
		B	&type_b = dynamic_cast<B&>(p);
		std::cout << "Type: B\n";
		(void)type_b;
		return ;
	}
	catch(const std::exception& e)
	{}
	try
	{
		C	&type_c = dynamic_cast<C&>(p);
		std::cout << "Type: C\n";
		(void)type_c;
		return ;
	}
	catch(const std::exception& e)
	{}
}
