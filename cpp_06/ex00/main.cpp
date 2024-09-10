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
    cout << "------------" << endl;
	cout << "CONVERTING 'Y': "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("Y");
	cout << endl;

	cout << "------------" << endl;
	cout << "CONVERTING 42 : "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("42");
	cout << endl;


	cout << "------------" << endl;
	cout << "CONVERTING 14.4f : " << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("14.4f");
	cout << endl;


	cout << "------------" << endl;
	cout << "CONVERTING 65.7 : "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("65.7");
	cout << endl;

	cout << "------------" << endl;
	cout << "CONVERTING a double greater then float max : " << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("34028234663852885981170418348459163244925440.0000000000000000");
	cout << endl;

	cout << "------------" << endl;
	cout << "CONVERTING nan : "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("nan");
	cout << endl;

	cout << "------------" << endl;
	cout << "CONVERTING nanf : "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("nanf");
	cout << endl;

	cout << "------------" << endl;
	cout << "CONVERTING +inff : "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("+inff");
	cout << endl;
	
	cout << "------------" << endl;
	cout << "CONVERTING -inff : "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("-inff");
	cout << endl;

	cout << "------------" << endl;
	cout << "CONVERTING \"ewqewq\" : "  << endl;
	cout << "------------" << endl;
	ScalarConverter::convert("ewqeqw");
	cout << endl;
}