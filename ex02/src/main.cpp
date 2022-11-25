/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:04:16 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/25 13:40:12 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void);
void	identify(Base &p);
void	identify(Base *p);

int	main(void)
{
	// THIS IS OK
	// std::cout << "Simple pointer identify tests :\n";
	// {
	// 	Base	*type_a = new A();
	// 	Base	*type_b = new B();
	// 	Base	*type_c = new C();

	// 	identify(type_a);
	// 	identify(type_b);
	// 	identify(type_c);
	// 	delete type_a;
	// 	delete type_b;
	// 	delete type_c;
	// }

	// std::cout << "\nSimple reference identify tests :\n";
	// {
	// 	A		type_a;
	// 	B		type_b;
	// 	C		type_c;
	// 	Base	&test_a = type_a;
	// 	Base	&test_b = type_b;
	// 	Base	&test_c = type_c;

	// 	std::cout << "Reference type A :\n";
	// 	identify(test_a);

	// 	std::cout << "Reference type B :\n";
	// 	identify(test_b);

	// 	std::cout << "Reference type C :\n";
	// 	identify(test_c);
	// }

	std::cout << "\nRandom class identification :\n";
	{
		Base	*random;

		std::cout << "First random generation :\n";
		random = generate();
		identify(random);

		std::cout << "Second random generation :\n";
		random = generate();
		identify(random);

		std::cout << "Third random generation :\n";
		random = generate();
		identify(random);
	}
	return (0);
}