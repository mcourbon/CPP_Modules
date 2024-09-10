/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:46:37 by marvin            #+#    #+#             */
/*   Updated: 2024/07/04 18:46:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data        data;
    Data        *serialized;
    uintptr_t   ptr;

    data.a = 'a';
    data.b = 0;
    data.c = 0.0f;
    data.d = 0.0;

    std::cout << "//////////////////// BEFORE SERIALIZING ////////////////////" << std::endl << std::endl;
	std::cout << "data.a = " << data.a << std::endl;
	std::cout << "data.b = " << data.b << std::endl;
	std::cout << "data.c = " << data.c << std::endl;
	std::cout << "data.d = " << data.d << std::endl << std::endl;
	
	ptr = Serializer::serialize(&data);

	std::cout << "//////////////////// AFTER SERIALIZING ////////////////////" << std::endl << std::endl;
	std::cout << "ptr = " << ptr << std::endl << std::endl;

	serialized = Serializer::deserialize(ptr);

	std::cout << "//////////////////// AFTER DESERIALIZING ////////////////////" << std::endl << std::endl;
	std::cout << "data.a = " << serialized->a << std::endl;
	std::cout << "data.b = " << serialized->b << std::endl;
	std::cout << "data.c = " << serialized->c << std::endl;
	std::cout << "data.d = " << serialized->d << std::endl << std::endl;
}