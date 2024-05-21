/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:18:01 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/14 16:40:28 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.cpp"

ClapTrap::ClapTRap(): |||| _hitPoints(10), _energyPoints(10), _attackDamage(10) ||||| {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "String constructor called" << std::endl;
    this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    std::cout << "Copy assignement operator called" << std::endl;
    this-> = rhs;
    return *this;
}

ClapTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage ! It's super efficace.";
        this->_energyPoints--;
    }
}

ClapTrap::takeDamage(unsigned int amount) {
    
}

ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        std::cout << "ClapTrap " << this->_name << " heals " << amount << " to himself ";
        this->_hitPoints += amount;
        std::cout << " He has now " << this->_hitPoints << " HP." << std::endl;
        this->_energyPoints--;
    }
}