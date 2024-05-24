/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:55:32 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 13:43:49 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main() {
    std::cout << GREEN << "----- TEST ANIMAL ------" << RESET << std::endl;
	const Animal* animal = new Animal();
	animal->makeSound();
	delete animal;
	std::cout << GREEN << "---------------------" << RESET << std::endl << std::endl;	
	std::cout << RED << "----- TEST CAT ------" << RESET << std::endl;
	const Animal* cat = new Cat();
	cat->makeSound();
	delete cat;
	std::cout << RED << "---------------------" << RESET << std::endl << std::endl;
	std::cout << BLUE << "----- TEST DOG ------" << RESET << std::endl;
	const Animal* dog = new Dog();
	dog->makeSound();
	delete dog;
	std::cout << BLUE << "---------------------" << RESET << std::endl << std::endl;
	std::cout << "----- TEST WRONGANIMAL ------" << std::endl;
	const WrongAnimal* wronganimal = new WrongAnimal();
	wronganimal->makeSound();
	delete wronganimal;
	std::cout << "---------------------" << std::endl << std::endl;	
	std::cout << RED << "----- TEST WRONGCAT ------" << RESET << std::endl;
	const WrongCat *wrongcat = new WrongCat();
	wrongcat->makeSound();
	delete wrongcat;
	std::cout << RED << "---------------------" << RESET << std::endl << std::endl;
	std::cout << "----- TEST WRONGCAT AS WRONGANIMAL ------" << std::endl;
	WrongAnimal *animals = new WrongCat;
	animals->makeSound();
	delete animals;
	std::cout << "---------------------" << std::endl << std::endl;
	return (0);
}