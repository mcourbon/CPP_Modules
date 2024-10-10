/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:22:10 by shifterpro        #+#    #+#             */
/*   Updated: 2024/09/19 15:33:38 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
    int a = 2;
	int b = 3;
	std::cout << "// BEFORE SWAP // a = " << a << ", b = " << b << std::endl;
	swap( a, b );
	std::cout << "// AFTER SWAP // a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "// BEFORE SWAP // c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "// AFTER SWAP // c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
	return 0;
}