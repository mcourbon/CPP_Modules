/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:37:23 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/17 12:06:31 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{}

PhoneBook::~PhoneBook()
{}

void    PhoneBook::homePhoneBook() {
    int i = 0;
    
    std::cout << "------------------CONTACTS-------------------" << std::endl;
    while (i < 8) {
        this->contact[i].displayLine(i);
        i++;
    }
}

void    PhoneBook::Add() {
    static int  i = 0;

    this->contact[i % 8].setContact();
    this->contact[i % 8].setIndex(i % 8);
    i++;
}

void    PhoneBook::initContacts() {
    int i = -1;
    
    while (++i < 8) {
        this->contact[i].initContact();
        this->contact[i].setIndex(-1);
    }
}

void    PhoneBook::Search() {
    std::string  cmd = "";
    int     index = 0;
    bool    isNumeric = true;

    this->homePhoneBook();
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Please enter the contact's index: ";
    std::getline(std::cin, cmd);
    isNumeric = Contact::onlyDigits(cmd);
    std::istringstream(cmd) >> index;
    if (!isNumeric || cmd.empty() || index < 1 || index > 8) {
        std::cout << "Incorect index" << std::endl;
        return ;
    }
    if (this->contact[index - 1].checkDeclaration() == false) {
        std::cout << "Contact not set yet" << std::endl;
    }
    else
        this->contact[index - 1].displayContact();
}
