/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:59:16 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:27:30 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << RED << "Cat" << RESET << " default constructor called" << std::endl;
    this->_Brain = new Brain;
    this->_type = "Cat";
}

// shallow copy = pointeurs vers données copiés, pas les données elles-mêmes
// deep copy = nouvelle copie des données, copies dinstinctes 
Cat::Cat(const Cat &src): Animal() {
    std::cout << RED << "Cat" << RESET << " deep copy constructor called" << std::endl;
    this->_type = src._type;
    this->_Brain = new Brain;
}

Cat::~Cat() {
    delete this->_Brain;
    std::cout << RED << "Cat" << RESET << " destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs) {
		this->_type = rhs._type;
        this->_Brain = new Brain(*rhs._Brain);
    }
	return *this;
}

void Cat::makeSound() const {
    std::cout << RED << "*Meows*" << RESET << std::endl;
}