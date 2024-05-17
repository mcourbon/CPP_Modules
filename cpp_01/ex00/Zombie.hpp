/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:45:05 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/19 10:40:59 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP

# include <iostream>

class   Zombie {
    
    private:
        std::string name;
    
    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce();
};

void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif
