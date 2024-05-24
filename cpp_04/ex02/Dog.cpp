/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:52:54 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:37:04 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
    std::cout << BLUE << "Dog" << RESET << " default constructor called" << std::endl;
    this->_Brain = new Brain;
}

Dog::Dog(const Dog &src): AAnimal() {
    std::cout << BLUE << "Dog" << RESET << " deep copy constructor called" << std::endl;
    this->_type = src._type;
    this->_Brain = new Brain;
}

Dog::~Dog() {
    delete this->_Brain;
    std::cout << BLUE << "Dog" << RESET << " destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs) {
		this->_type = rhs._type;
        this->_Brain = new Brain(*rhs._Brain);
    }
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Dog &i){
    o << i.getType();
    return o;
}

void Dog::makeSound() const {
    std::cout << BLUE << "*Barks*" << RESET << std::endl;
}