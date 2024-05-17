/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:55:10 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/17 12:05:04 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main() {
    PhoneBook PhoneBook;
    std::string cmd;

    PhoneBook.initContacts();
    while (true) {
        std::cout << std::endl;
        std::cout << "   Welcome to your Awesome PhoneBook" << std::endl;
        std::cout << std::endl;
        std::cout << "--------------->" << BOLD << "USAGE" << RESET << "<----------------" << std::endl;
        std::cout << "| " << RED << "ADD" << RESET << "     : To add a contact.        |" << std::endl;
        std::cout << "| " << RED << "SEARCH" << RESET << "  : To search for a contact. |" << std::endl;
        std::cout << "| " << RED << "EXIT" << RESET << "    : To exit the PhoneBook.   |" << std::endl;
        std::cout << "--------------------------------------" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            return ((std::cout << "CTRL + D detected : exiting PhoneBook\n"), 1);
        if (cmd.compare("ADD") == 0)
            PhoneBook.Add();
        else if (cmd.compare("SEARCH") == 0)
            PhoneBook.Search();
        else if (cmd.compare("EXIT") == 0)
            return ((std::cout << "See you soon !" << std::endl), 0);
        else
            std::cout << "Invalid Input" << std::endl;
    }
}
