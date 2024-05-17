/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:13:05 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/29 10:29:31 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = 0;
}

HumanB::~HumanB()
{}

void    HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << this->name << " special attack with ";
    if (!this->weapon)
        std::cout << " nothing !" << std::endl;
    else
        std::cout << this->weapon->getType() << std::endl;
}