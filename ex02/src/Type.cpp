/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:58:06 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/25 11:46:46 by amarini-         ###   ########.fr       */
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
	A	*type_a = new A();
	B	*type_b = new B();
	C	*type_c = new C();

	try
	{
		type_a = dynamic_cast<A*>(p);
		std::cout << "Type: A\n";
	}
	catch (std::bad_cast e)
	{
		(void)e;
	}
	try
	{
		type_b = dynamic_cast<B*>(p);
		std::cout << "Type: B\n";
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		type_c = dynamic_cast<C*>(p);
		std::cout << "Type: C\n";
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	delete type_a;
	delete type_b;
	delete type_c;
}

void	identify(Base &p)
{
	try
	{
		A	&type_a = dynamic_cast<A&>(p);
		std::cout << "Type: A\n";
		(void)type_a;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B	&type_b = dynamic_cast<B&>(p);
		std::cout << "Type: B\n";
		(void)type_b;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C	&type_c = dynamic_cast<C&>(p);
		std::cout << "Type: C\n";
		(void)type_c;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
}
