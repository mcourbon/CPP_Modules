/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:02:41 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/17 12:08:12 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP
# define _CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>

# define RED "\033[31m"
# define BLUE "\033[34m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"
# define UNDER "\033[4m"
# define BOLD "\033[1m"

class Contact {
    
private:
    int id;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    ~Contact();
    std::string Trunc(std::string str);
    std::string getText(std::string str);
    bool        checkDeclaration();
    static bool onlyDigits(const std::string str);
    void        displayLine(int index);
    void        initContact();
    void        setContact();
    void        setIndex(int n);
    void        displayContact();
};

#endif
