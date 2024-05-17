/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:44:50 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/29 09:50:17 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type) {
    this->setType(type);
}

Weapon::~Weapon()
{}

const   std::string& Weapon::getType() {
    return this->type;
}

void    Weapon::setType(std::string newType) {
    this->type = newType;
}
