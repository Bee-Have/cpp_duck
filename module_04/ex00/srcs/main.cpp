/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:35:08 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 16:21:07 by amarini-         ###   ########.fr       */
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
		std::cout << YB << "	Constructors : \n" << END;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << YB << "	Tests : \n" << END;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << YB << "	Destructors : \n" << END;
		delete meta;
		delete j;
		delete i;
	}

	std::cout << GB << "\nCounter NON-Polymorphism tests :\n" << END;
	{
		std::cout << YB << "	Constructors : \n" << END;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongDog();
		const WrongAnimal* i = new WrongCat();

		std::cout << YB << "	Tests : \n" << END;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the WrongAnimal sound!
		j->makeSound();
		meta->makeSound();

		std::cout << YB << "	Destructors : \n" << END;
		delete meta;
		delete j;
		delete i;
	}

	std::cout << GB << "\nMy tests :\n" << END;
	{
		const Cat		cat_base;
		const Animal	cat_derived(cat_base);

		// dog_derived = &dog_base;
		
		std::cout << "base class type : " << cat_base.getType() << "\n";
		std::cout << "derived class type : " << cat_derived.getType() << "\n";
		cat_base.makeSound(); //will output Cat class sound
		cat_derived.makeSound(); //will output Animal sound with Cat type
	}
	
	return (0);
}
