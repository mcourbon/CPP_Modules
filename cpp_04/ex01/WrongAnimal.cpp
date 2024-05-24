/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:02:48 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/23 11:05:22 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->_type = "Default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const WrongAnimal &i){
    o << i.getType();
    return o;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal noises" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}