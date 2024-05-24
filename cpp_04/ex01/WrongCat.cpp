/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:08:35 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 10:26:19 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << RED << "WrongCat" << RESET << " default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal() {
    std::cout << RED << "WrongCat" << RESET << " copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat() {
    std::cout << RED << "WrongCat" << RESET << " destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const WrongCat &i){
    o << i.getType();
    return o;
}

void WrongCat::makeSound() const {
    std::cout << RED << "*Wrong Meows*" << RESET << std::endl;
}