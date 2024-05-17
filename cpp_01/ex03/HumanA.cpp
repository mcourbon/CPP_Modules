/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:08:58 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/29 16:53:02 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon) 
{}

HumanA::~HumanA()
{}

void    HumanA::attack() {
    std::cout << this->name << " special attack with " << this->weapon.getType() << std::endl;
}
