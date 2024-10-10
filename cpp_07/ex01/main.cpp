/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:34:37 by shifterpro        #+#    #+#             */
/*   Updated: 2024/09/19 15:42:49 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	upperswap(char &a) {
	a = toupper(a);
}

void	plusone(int	&a) {
	a++;
}

int main() {
    char	str[] = "am i yelling ?";
	int		array[] = {1, 2, 3, 4, 5};

	std::cout << "// BEFORE ITER (char array) // " << str << std::endl;
	iter(str, strlen(str), upperswap);
	std::cout << "// AFTER ITER (char array) // " << str << std::endl << std::endl;
	
	std::cout << " // BEFORE ITER (int array) // ";
	for (size_t i = 0; i < (sizeof(array) / sizeof(int)); i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
	iter(array, (sizeof(array) / sizeof(int)), plusone);
	std::cout << "// AFTER ITER (int array) // ";
	for (size_t j = 0; j < (sizeof(array) / sizeof(int)); j++)
		std::cout << array[j] << " ";
	std::cout << std::endl;
}