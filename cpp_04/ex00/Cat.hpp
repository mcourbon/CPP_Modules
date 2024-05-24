/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:22:46 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 10:58:57 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
    public:
        Cat();
        Cat(const Cat &src);
        ~Cat();

        Cat &operator=(const Cat &rhs);
        
        void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &o, const Cat &i);

#endif