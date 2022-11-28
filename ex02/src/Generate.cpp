/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:45:05 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/28 14:27:55 by amarini-         ###   ########.fr       */
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
	int	random_class = rand();
	Base	*classes[3];

	classes[0] = new A();
	classes[1] = new B();
	classes[2] = new C();

	std::srand(std::time(0) + rand());
	random_class = rand() % 3;
	for (int i = 0; i < 3; ++i)
	{
		if (i != random_class)
			delete classes[i];
	}
	return (classes[random_class]);
}
