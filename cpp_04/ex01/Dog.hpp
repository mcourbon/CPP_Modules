/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:23:51 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:30:48 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
    private:
        Brain *_Brain;
    public:
        Dog();
        Dog(const Dog &src);
        virtual ~Dog();

        Dog &operator=(const Dog &rhs);
        
        void    makeSound() const;
};

#endif