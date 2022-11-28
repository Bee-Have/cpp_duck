/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:04:16 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/28 14:28:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

Base	*generate(void);
void	identify(Base &p);
void	identify(Base *p);

int	main(void)
{
	std::cout << YB << "Simple pointer identify tests :\n" << END;
	{
		std::cout << BOLD << "Creating three polymorphic object pointers to object classes A-B-C\n";
		Base	*type_a = new A();
		Base	*type_b = new B();
		Base	*type_c = new C();

		std::cout << GB << "Identifying type A :\n" << END;
		identify(type_a);
		std::cout << GB << "Identifying type B :\n" << END;
		identify(type_b);
		std::cout << GB << "Identifying type b :\n" << END;
		identify(type_c);

		delete type_a;
		delete type_b;
		delete type_c;
	}

	std::cout << YB << "\nSimple reference identify tests :\n" << END;
	{
		std::cout << BOLD << "Creating three polymorphic object reference to object classes A-B-C\n";
		A		type_a;
		B		type_b;
		C		type_c;
		Base	&test_a = type_a;
		Base	&test_b = type_b;
		Base	&test_c = type_c;

		std::cout << GB << "Reference type A :\n" << END;
		identify(test_a);

		std::cout << GB << "Reference type B :\n" << END;
		identify(test_b);

		std::cout << GB << "Reference type C :\n" << END;
		identify(test_c);
	}

	std::cout << YB << "\nRandom class identification :\n";
	{
		Base	*random;

		std::cout << GB << "First random generation :\n" << END;
		random = generate();
		identify(random);
		delete random;

		std::cout << GB << "Second random generation :\n" << END;
		random = generate();
		identify(random);
		delete random;

		std::cout << GB << "Third random generation :\n" << END;
		random = generate();
		identify(random);
		delete random;
	}
	return (0);
}