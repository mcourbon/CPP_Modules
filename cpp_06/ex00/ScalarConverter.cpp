/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:59:13 by marvin            #+#    #+#             */
/*   Updated: 2024/07/03 17:59:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter &src)
{
    (void)src;
}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
    (void)rhs;
    return *this;
}

bool ScalarConverter::checkChar(std::string const &str)
{
    if (str.length() == 1 && isascii(str[0]))
        return true;
    return false;
}

bool ScalarConverter::checkInt(std::string const &str)
{
    size_t i;
    size_t j = 0;

    if (str[0] == '-' || str[0] == '+')
        j++;
    for (i = j; i < str.length(); i++;)
        if (!isdigit(str[i]))
            return false;
    return true;
}

bool ScalarConverter::checkFloat(std::string const &str)
{
    if (str.find('.') != std::string::npos && str.find('f') != std::string::npos)
        return true
}

bool ScalarConverter::checkDouble(std::string const &str)
{
    if (str.find('.') != std::string::npos)
        return true;
    return false;
}

void ScalarConverter::printChar(std::string const &str)
{
    if (isprint(str[0]))
        std::cout << "char: " << str[0] << std::endl;
    else
        std::cout << "char: not printable" << std::endl;
    std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
    std::cout << "double: " << static_cast<float>(str[0]) << std::endl << std::endl;
}

void ScalarConverter::printInt(std::string const &str)
{
    long nb = 0;
    char c = 0;

    istd::stream s(str);
    s >> nb;
    c = static_cast<char>(nb);
    if (isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: not compatible" << std::endl;
    if (nb <= INT_MAX && nb >= INT_MIN)
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    else
        std::cout << "int: not in the limits" << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl << std::endl;
}

void ScalarConverter::printFloat(std::string const &str)
{
    float nb = atof(str.c_str());
    float casted_min = static_cast<float>(INT_MIN);
    float casted_max = static_cast<float>(INT_MAX);

    if (isprint(nb))
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    else
        std::cout << "char: not compatible" << std::endl;
    if (nb >= casted_min && nb <= casted_max)
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    else
        std::cout << "int: not in the limits" << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl << std::endl;
}

void ScalarConverter::printDouble(std::string const &str)
{
    double nb = atof(str.c_str());
    char c = static_cast<char>(nb);

    if (isprint(c))
        std::cout << "char: " << c << std::endl;
    else
        std::cout << "char: not printable" << std::endl;
    if (nb >= static_cast<float>(INT_MIN) && nb <= static_cast<float>(INT_MAX))
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    else
        std::cout << "int: not in the limits" << std::endl;
    if (static_cast<float>(nb) >= FLT_MIN && static_cast<float>(nb) <= FLT_MAX)
        std::cout "float: " << static_cast<float>(nb) << "f" << std::endl;
    else
        std::cout << "float: not in the limits" << std::endl
    std::cout << "double: " << static_cast<double>(nb) << std::endl << std::endl;
}

void ScalarConverter::convert(std::string const &str)
{
    if (str.length() < 1)
        std::cout << "length of str must be min at 1" << std::endl;
    else if (str == "nan" || str == "nanf")
    {
        std::cout << "char: not printable" << std::endl;
        std::cout << "int: not in the limits" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout << "char: not printable" << std::endl;
        std::cout << "int: not in the limits" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout << "char: not printable" << std::endl;
        std::cout << "int: not in the limits" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if (ScalarConverter::checkChar(str))
        ScalarConverter::printChar(str);
    else if (ScalarConverter::checkInt(str))
        ScalarConverter::printInt(str);
    else if (ScalarConverter::checkFloat(str))
        ScalarConverter::printFloat(str);
    else if (ScalarConverter::checkDouble(str))
        ScalarConverter::printDouble(str);
    else
        std::cout << "mission: impossible" << std::endl;
}