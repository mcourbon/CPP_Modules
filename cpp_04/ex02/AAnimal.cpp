/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:57:18 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:24:56 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "AAnimal default constructor called" << std::endl;
    this->_type = "Default";
}

AAnimal::AAnimal(std::string str) : _type(str) {
	std::cout << "AAnimal constructor called !" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
    if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const AAnimal &i){
    o << i.getType();
    return o;
}

void AAnimal::makeSound() const {
    std::cout << "AAnimal noises" << std::endl;
}

std::string AAnimal::getType() const {
    return this->_type;
}