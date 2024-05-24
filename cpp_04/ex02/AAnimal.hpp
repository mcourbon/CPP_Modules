/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:23:41 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:38:14 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

class AAnimal {
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(std::string str);
        AAnimal(const AAnimal &src);
        virtual ~AAnimal();

        AAnimal &operator=(const AAnimal &rhs);

        std::string     getType() const;
        virtual void    makeSound() const = 0; // méthode pure
};

std::ostream    &operator<<(std::ostream &o, const AAnimal &i);

#endif