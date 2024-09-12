/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:56:33 by marvin            #+#    #+#             */
/*   Updated: 2024/07/03 17:56:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
    std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 'Y': "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("Y");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 42 : "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("42");
	std::cout << std::endl;


	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 14.4f : " << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("14.4f");
	std::cout << std::endl;


	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 65.7 : "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("65.7");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING a double greater then float max : " << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("34028234663852885981170418348459163244925440.0000000000000000");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING nan : "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING nanf : "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING +inff : "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	
	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING -inff : "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING \"ewqewq\" : "  << std::endl;
	std::cout << "------------" << std::endl;
	ScalarConverter::convert("ewqeqw");
	std::cout << std::endl;
}