/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:45:05 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/01 15:15:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	static bool seeded(false);
	int	random_class;
	Base	*classes[3];

	classes[0] = new A();
	classes[1] = new B();
	classes[2] = new C();
	if (seeded == false)
	{
		std::srand(std::time(NULL));
		seeded = true;
	}
	random_class = rand() % 3;
	for (int i = 0; i < 3; ++i)
	{
		if (i != random_class)
			delete classes[i];
	}
	return (classes[random_class]);
}
