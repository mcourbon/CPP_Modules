/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:35:08 by shifterpro        #+#    #+#             */
/*   Updated: 2024/12/21 13:44:13 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try {
		Array<int> intArray(5);
		for (unsigned int i = 0; i < intArray.size(); ++i)
			intArray[i] = i * 10;
		for (unsigned int i = 0; i < intArray.size(); ++i)
			std::cout << "Element " << i << ": " << intArray[i] << std::endl;

		//exception handling Test
		//int value = intArray[10];
		//(void)value;
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}