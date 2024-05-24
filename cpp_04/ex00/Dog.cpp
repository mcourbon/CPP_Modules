/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:52:54 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 10:26:33 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << BLUE << "Dog" << RESET << " default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &src): Animal() {
    std::cout << BLUE << "Dog" << RESET << " copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog() {
    std::cout << BLUE << "Dog" << RESET << " destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
    if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Dog &i){
    o << i.getType();
    return o;
}

void Dog::makeSound() const {
    std::cout << BLUE << "*Barks*" << RESET << std::endl;
}