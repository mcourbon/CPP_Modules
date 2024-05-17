/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:07:13 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/17 12:03:24 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

std::string  Contact::Trunc(std::string str) {
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

std::string  Contact::getText(std::string str) {
    std::string  cmd;
    
    std::cout << str;
    std::getline (std::cin, cmd);
    if (std::cin.eof()) {
        std::cout << std::endl << "CTRL + D detected : exciting PhoneBook" << std::endl;
        exit(1);
    }
    if (cmd.length() == 0) {
        return (this->getText(str));
    }
    return (cmd);
}

void    Contact::displayLine(int index) {
    std::cout << "|" << std::setw(9) << index + 1 << ".";
    std::cout << "|" << std::setw(10) << Trunc(this->first_name);
    std::cout << "|" << std::setw(10) << Trunc(this->last_name);
    std::cout << "|" << std::setw(10) << Trunc(this->nick_name);
    std::cout << "|" << std::endl;
}

void    Contact::setContact() {
    bool    isNumeric = false;

    this->first_name = getText("First Name: ");
    this->last_name = getText("Last Name: ");
    this->nick_name = getText("Nick Name: ");
    while (isNumeric == false) {
        this->phone_number = getText("Phone Number: ");
        if (this->onlyDigits(this->phone_number) == true)
            isNumeric = true;
    }
    this->darkest_secret = getText("Darkest Secret: ");
}

void    Contact::setIndex(int n) {
    if (n == -1)
        this->id = -1;
    else
        this->id = n;
}

void    Contact::initContact() {
    this->first_name = "";
    this->last_name = "";
    this->nick_name = "";
    this->phone_number= "";
    this->darkest_secret = "";
}

bool    Contact::checkDeclaration() {
    if (this->id == -1)
        return (false);
    return (true);
}

bool    Contact::onlyDigits(const std::string str) {
    bool    isNumeric = true;
    size_t  i = 0;

    for (i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            isNumeric = false;
            break ;
        }
    }
    return (isNumeric);
}

void    Contact::displayContact() {
    std::cout << std::endl;
    std::cout << "Contact [" << this->id + 1 << "]" << std::endl;
    std::cout << "First Name: " << this->first_name << std::endl;
    std::cout << "Last Name: " << this->last_name << std::endl;
    std::cout << "Nick Name: " << this->nick_name << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}
