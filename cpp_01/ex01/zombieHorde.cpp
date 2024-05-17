/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:54:27 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/19 13:16:54 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name) {
    if (N <= 0) {
        std::cerr << "Error: N must be positive" << std::endl;
        exit(1);
    }
    
    Zombie  *horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
        horde[i].setName(name + std::to_string(i + 1));
    }

    return horde;
}
