/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:18:30 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/15 15:00:41 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    fixedNbrComa = 0;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    fixedNbrComa(value << nbrBit);
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->fixedNbrComa = roundf(value * (1 << this->nbrBit));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedNbrComa = other.getRawBits();
    return *this;
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
    return (float)this->fixedNbrComa / (1 << this->nbrBit);
}

int Fixed::toInt() const {
    return (this->fixedNbrComa >> this->nbrBit);
}