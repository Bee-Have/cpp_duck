/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:58:06 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/25 11:03:13 by amarini-         ###   ########.fr       */
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
	A	*type_a;
	B	*type_b;
	C	*type_c;

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
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
}

void	identify(Base &p)
{
	(void)p;
}
