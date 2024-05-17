/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:25:06 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/29 09:33:51 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
    
    private:
        std::string name;
        Weapon&     weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        
        void    attack();   
};

#endif