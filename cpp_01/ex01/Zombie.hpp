/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:48:18 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/19 13:18:17 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>

class Zombie {
    
    private:
        std::string name;
    
    public:
        Zombie();
        ~Zombie();
        void    announce();
        void    setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
