/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:45:05 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/23 15:57:53 by amarini-         ###   ########.fr       */
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
	int	random_class;
	Base	*classes[3];

	classes[0] = new A();
	classes[1] = new B();
	classes[2] = new C();

	std::srand(std::time(0));
	random_class = std::rand();
	return (classes[random_class % 3]);
}
