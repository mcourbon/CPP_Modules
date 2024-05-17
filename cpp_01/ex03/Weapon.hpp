/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:22:31 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/29 09:50:33 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

    private:
        std::string type;
        
    public:
        Weapon(std::string  type);
        ~Weapon();
        const std::string&  getType();
        void                setType(std::string newType);           
};

#endif