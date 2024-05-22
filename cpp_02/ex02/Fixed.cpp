/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:18:30 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/20 15:59:32 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedNbrComa(0) {
    /* std::cout << "Default constructor called" << std::endl; */
}

Fixed::Fixed(const int value) : fixedNbrComa(value << nbrBit) {
    /* std::cout << "Int constructor called" << std::endl; */
}

Fixed::Fixed(const float value) : fixedNbrComa(roundf(value * (1 << this->nbrBit))) {
    /* std::cout << "Float constructor called" << std::endl; */
}

Fixed::Fixed(const Fixed& other) {
    /* std::cout << "Copy constructor called" << std::endl; */
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    /* std::cout << "Copy assignment operator called" << std::endl; */
    if (this != &other)
        this->fixedNbrComa = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    /* std::cout << "Destructor Called" << std::endl; */
}

int Fixed::getRawBits() const {
    /* std::cout << "getRawBits member function called" << std::endl; */
    return this->fixedNbrComa;
}

void Fixed::setRawBits(int const raw) {
    /* std::cout << "setRawBits member function called" << std::endl; */
    this->fixedNbrComa = raw;
}

float Fixed::toFloat() const {
    return ((float)this->getRawBits() / (1 << this->nbrBit));
}

int Fixed::toInt() const {
    return (this->fixedNbrComa >> nbrBit);
}

std::ostream & operator<<(std::ostream & o, const Fixed& i){
    o << i.toFloat();
    return o;
}

/* Operators */

bool Fixed::operator<(const Fixed& other) const {
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>(const Fixed& other) const {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const {
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

/* Pré incrémentation */
Fixed& Fixed::operator++() {
    ++this->fixedNbrComa;
    return *this;
}

/* Post incrémentation */
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    tmp.fixedNbrComa = this->fixedNbrComa++;
    return tmp;
}

Fixed& Fixed::operator--() {
    --this->fixedNbrComa;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    tmp.fixedNbrComa = this->fixedNbrComa--;
    return tmp;
}

/* Max et Min */

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}
