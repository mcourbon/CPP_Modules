/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:55:32 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 13:34:41 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
	
	std::cout << "-----Constructors-----" << std::endl;
	const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	std::cout << "-----Destructors-----" << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "Animal [" << i << "]" << std::endl;
		delete animals[i];
		std::cout << "--------" << std::endl;
	}
	Dog normal;
	std::cout << "---" << std::endl;
	{
		Dog tmp = normal;
	}
	std::cout << "---" << std::endl;
}