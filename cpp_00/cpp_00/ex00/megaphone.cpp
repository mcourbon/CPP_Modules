/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:55:45 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/16 10:03:38 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av) {

    if (ac == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        for (int i = 1; i < ac; i++) {
            for (int j = 0; av[i][j]; j++) {
                av[i][j] = std::toupper(av[i][j]);
            }
            std::cout << av[i];
        }
        std::cout << std::endl;
    }
    return (0);
}
