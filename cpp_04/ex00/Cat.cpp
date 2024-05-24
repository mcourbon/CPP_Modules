/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:18:13 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 10:59:08 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << RED << "Cat" << RESET << " default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &src): Animal() {
    std::cout << RED << "Cat" << RESET << " copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat() {
    std::cout << RED << "Cat" << RESET << " destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Cat &i){
    o << i.getType();
    return o;
}

void Cat::makeSound() const {
    std::cout << RED << "*Meows*" << RESET << std::endl;
}