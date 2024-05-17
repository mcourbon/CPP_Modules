/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:27:33 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/29 09:44:16 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
    
    private:
        std::string name;
        Weapon*     weapon;

    public:
        HumanB(std::string name);
        ~HumanB();
        
        void    attack();  
        void    setWeapon(Weapon& weapon); 
};

#endif