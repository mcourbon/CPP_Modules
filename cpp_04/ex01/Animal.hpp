/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:19:00 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 14:11:41 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED "\033[31m"
# define BLUE "\033[34m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"
# define UNDER "\033[4m"
# define BOLD "\033[1m"

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal {
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string str);
        Animal(const Animal &src);
        virtual ~Animal();

        Animal &operator=(const Animal &rhs);

        std::string     getType() const;
        virtual void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &o, const Animal &i);

#endif