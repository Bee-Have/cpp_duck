/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:35:08 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/26 08:14:15 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// Colors
#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int main()
{
	std::cout << GB << "Simple test :\n" << END;
	{
		std::cout << YB << "Contructors :\n" << END;
		// const Animal	*base = new Animal(); // this will not compile
		const Animal	*derived_cat = new Cat();
		const Animal	*derived_dog = new Dog();
		
		std::cout << YB << "Tests :\n" << END;
		std::cout << "type: " << derived_cat->getType() << "\n";
		std::cout << "type: " << derived_dog->getType() << "\n";
		derived_cat->makeSound();
		derived_dog->makeSound();

		std::cout << YB << "Destructors :\n" << END;
		delete derived_cat;
		delete derived_dog;
	}

	std::cout << GB << "\nNo allocation tests :\n" << END;
	{
		std::cout << YB << "Constructor :\n" << END;
		// Animal	test; // this will not compile
		Cat		derived;

		std::cout << YB << "Reference to derived classs test :\n" << END;
		Animal	&reference = derived;
		reference.makeSound();

		std::cout << YB << "Pointer to derived class test :\n" << END;
		Animal	*pointer = &derived;
		pointer->makeSound();

		// derived.Animal::makeSound(); // this will not compile
	}

	std::cout << GB << "\nSimple array tests :\n" << END;
	{
		// this poses no problem because no constructor i called
		Animal	*tiny_hoard[2];
		std::cout << YB << "Constructors :\n" << END;
		tiny_hoard[0] = new Dog();
		tiny_hoard[1] = new Cat();

		std::cout << YB << "Tests :\n" << END;
		tiny_hoard[0]->makeSound();
		tiny_hoard[1]->makeSound();

		std::cout << YB << "Destructors :\n" << END;
		delete tiny_hoard[0];
		delete tiny_hoard[1];
	}
}
