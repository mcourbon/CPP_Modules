/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:01:49 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 11:41:32 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(const Span &src) : _N(src._N) {
    this->_container.clear();
    this->_container = src._container;
}

Span::Span(unsigned int N) : _N(N) {}

Span::~Span() {}

Span &Span::operator=(const Span &rhs) {
    this->_N = rhs._N;
    this->_container = rhs._container;
    return *this;
}

void    Span::addNumber(int N) {
    if (_container.size() >= this->_N) {
        throw std::out_of_range("Container is full: Can't add more numbers");
    }
    else {
        this->_container.push_back(N);
    }
}

int     Span::shortestSpan() {
    int         shortest;
    vector<int> vector = this->_container;

    if (vector.size() < 2) {
        throw std::out_of_range("Container must have at least 2 elements to calculate span");
    }
    sort(vector.begin(), vector.end());
    shortest = abs(vector[0] - vector[1]);
    for (size_t i = 0; i < vector.size(); i++) {
        if (abs(vector[i] - vector[i + 1]) < shortest)
            shortest = abs(vector[i] - vector[i + 1]);
    }
    return shortest;
}

int     Span::longestSpan() {
    int         longest;
    vector<int> vector = this->_container;

    if (vector.size() < 2) {
        throw std::out_of_range("To calculate span, container must have at least 2 elements");
    }
    sort(vector.begin(), vector.end());
    longest = vector[vector.size() - 1] - vector[0];
    return longest;
}

void    Span::printSpan() {
    for (vector<int>::iterator it = _container.begin(); it != _container.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void    Span::addNumbers(int N, int nbs) {
    for (int i = 0; i < nbs; i++)
        this->_container.push_back(N);
}