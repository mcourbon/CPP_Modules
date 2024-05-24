/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:36:00 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 16:17:14 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    for (int i = 0;i < 100; i++) {
        this->_ideas[i] = "fat is life";
    }
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = src._ideas[i] + " copy";
    }
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain desctrutor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = rhs._ideas[i];
    }
    return *this;
}