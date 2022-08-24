/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:35:08 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 21:58:27 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

// Colors
#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int main()
{
	std::cout << GB << "Mandatory Polymorphism tests :\n" << END;
	{
		std::cout << YB << "Constructors :\n" << END;
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << YB << "Destructors :\n" << END;
		delete	j;
		delete	i;
	}

	std::cout << GB << "\nArray tests :\n" << END;
	{
		std::cout << YB << "Constructors :\n" << END;
		Animal	tiny_hoard[2];
		std::cout << YB "Assignation :\n" << END;
		tiny_hoard[0] = Dog();
		tiny_hoard[1] = Cat();

		std::cout << YB << "Tests :\n" << END;
		tiny_hoard[0].makeSound();
		tiny_hoard[1].makeSound();

		std::cout << YB << "Destructors :\n" << END;
	}

	return (0);
}
