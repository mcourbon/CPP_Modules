/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:06:35 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/23 11:06:40 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        ~WrongCat();

        WrongCat &operator=(const WrongCat &rhs);
        
        void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &o, const WrongCat &i);

#endif