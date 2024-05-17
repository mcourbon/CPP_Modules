/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:27:01 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/19 13:02:38 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::string name;

    std::cout << "Zombie on the stack" << std::endl;
    std::cout << "Oh my ! She is eating the brain, do you know her ? Just tell me her name: ";
    std::cin >> name;

    Zombie  zombie_stack(name);

    std::cout << "Zombie on the heap" << std::endl;
    std::cout << "Gosh please tell me it's not John ! Who do you think it is: ";
    std::cin >> name;

    Zombie  *zombie_heap = newZombie(name);
    
    zombie_stack.announce();
    zombie_heap->announce();

    delete zombie_heap;

    std::cout << "Look at that chump, give him a name: ";
    std::cin >> name;

    randomChump(name);

    return 0;
}