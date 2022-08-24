/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:35:08 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 19:26:34 by amarini-         ###   ########.fr       */
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
		std::cout << YB << "Constructors : \n" << END;
		const Animal* base = new Animal();
		const Animal* derived_cat = new Cat();
		const Animal* derived_dog = new Dog();

		std::cout << YB << "Tests : \n" << END;
		std::cout << "type: " << base->getType() << "\n";
		std::cout << "type: " << derived_cat->getType() << "\n";
		std::cout << "type: " << derived_dog->getType() << "\n";
		base->makeSound(); // will output the animal/base sound!
		derived_cat->makeSound(); // will output the cat/derived sound!
		derived_dog->makeSound(); // will outpit the dog/derived sound!

		std::cout << YB << "Destructors : \n" << END;
		delete base;
		delete derived_cat;
		delete derived_dog;
	}

	std::cout << GB << "\nCounter NON-Polymorphism tests :\n" << END;
	{
		std::cout << YB << "Constructors : \n" << END;
		const WrongAnimal* base = new WrongAnimal();
		const WrongAnimal* derived_cat = new WrongCat();
		const WrongAnimal* derived_dog = new WrongDog();

		std::cout << YB << "Tests : \n" << END;
		std::cout << "type: " << base->getType() << "\n";
		std::cout << "type: " << derived_cat->getType() << "\n";
		std::cout << "type: " << derived_dog->getType() << "\n";
		base->makeSound(); // will output the animal/base sound!
		derived_cat->makeSound(); // will output the animal/base sound!
		derived_dog->makeSound(); // will outpit the animal/base sound!

		std::cout << YB << "Destructors : \n" << END;
		delete base;
		delete derived_cat;
		delete derived_dog;
	}

	std::cout << GB << "\nNo allocation tests :\n" << END;
	{
		std::cout << YB << "Declaration of base and derived class objects :\n" << END;
		Animal	base;
		Cat		derived;

		std::cout << YB << "\nTest with references :\n" << END;
		Animal	&base_ref = base;
		Animal	&derived_ref = derived;
		std::cout << "base class, exemple :\n";
		base_ref.makeSound();
		std::cout << "derived class, polymorphism: \n";
		derived_ref.makeSound();

		std::cout << YB << "\nTest with pointers :\n" << END;
		Animal	*base_point = &base;
		Animal	*derived_point = &derived;
		std::cout << "base class, exemple :\n";
		base_point->makeSound();
		std::cout << "derived class, polymorphism: \n";
		derived_point->makeSound();

		std::cout << "\nSpecification of type during function call :\n";
		std::cout << "(both will display parent function message voluntarily)\n";
		std::cout << "base class, exemple :\n";
		base_ref.Animal::makeSound();
		std::cout << "derived class, polymorphism :\n";
		derived_ref.Animal::makeSound();

		std::cout << YB << "Destructors : \n" << END;
	}
	
	return (0);
}
