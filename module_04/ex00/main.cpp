/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:35:08 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 07:35:40 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "Mandatory Polymorphism tests :\n";
	{
		std::cout << "	Constructors : \n";
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "\n	Tests : \n";
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << "\n	Destructors : \n";
		delete meta;
		delete j;
		delete i;
	}
	
	std::cout << "\nCounter NON-Polymorphism tests :\n";
	{
		std::cout << "	Constructors : \n";
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongDog();
		const WrongAnimal* i = new WrongCat();

		std::cout << "\n	Tests : \n";
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the WrongAnimal sound!
		j->makeSound();
		meta->makeSound();

		std::cout << "\n	Destructors : \n";
		delete meta;
		delete j;
		delete i;
	}
	
	return (0);
}
