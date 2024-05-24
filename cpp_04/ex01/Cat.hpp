/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:22:46 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:30:46 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
    private:
        Brain *_Brain;
    public:
        Cat();
        Cat(const Cat &src);
        virtual ~Cat();

        Cat &operator=(const Cat &rhs);
        
        void    makeSound() const;
};

#endif