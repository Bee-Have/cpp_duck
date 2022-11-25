/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:45:05 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/25 13:52:16 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	std::cout << "random : " << random_class << "\n";
	return (classes[random_class]);
}
