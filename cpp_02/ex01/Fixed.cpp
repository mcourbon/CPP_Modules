/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:18:30 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/19 16:33:52 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedNbrComa (0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : fixedNbrComa(value << nbrBit) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixedNbrComa(roundf(value * (1 << nbrBit))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixedNbrComa = other.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream & o, Fixed const &i) {
    o << i.toFloat();
    return (o);
}

Fixed::~Fixed() {
    std::cout << "Destructor Called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedNbrComa;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedNbrComa = raw;
}

float Fixed::toFloat() const {
    return ((float)this->getRawBits() / (1 << this->nbrBit));
}

int Fixed::toInt() const {
    return (this->fixedNbrComa >> this->nbrBit);
}
