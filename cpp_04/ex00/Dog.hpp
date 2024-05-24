/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:23:51 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/22 16:56:44 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
    public:
        Dog();
        Dog(const Dog &src);
        ~Dog();

        Dog &operator=(const Dog &rhs);
        
        void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &o, const Animal &i);

#endif