/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:33:24 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/17 12:09:29 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP
# define _PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {

private:
    Contact contact[8];

public:
    PhoneBook();
    ~PhoneBook();
    
    void    homePhoneBook();
    void    initContacts();
    void    Add();
    void    Search();
};

#endif
