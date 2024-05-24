/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:55:32 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:42:19 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "-----Constructors-----" << std::endl;
	const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	std::cout << "-----Destructors-----" << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		std::cout << "Animal [" << i << "]" << std::endl;
		delete animals[i];
		std::cout << "--------" << std::endl;
	}
	Dog basic;
	std::cout << "---" << std::endl;
	{
		Dog tmp = basic;
	}
	std::cout << "---" << std::endl;
	// AAnimal test;
}