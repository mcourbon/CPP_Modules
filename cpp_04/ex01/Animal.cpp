/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:57:18 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 14:01:30 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called" << std::endl;
    this->_type = "Default";
}

Animal::Animal(std::string str) : _type(str) {
	std::cout << "Animal constructor called !" << std::endl;
}

Animal::Animal(const Animal &src) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
    if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Animal &i){
    o << i.getType();
    return o;
}

void Animal::makeSound() const {
    std::cout << "Animal noises" << std::endl;
}

std::string Animal::getType() const {
    return this->_type;
}