/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:25:37 by marvin            #+#    #+#             */
/*   Updated: 2024/07/03 18:25:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>;
# include <sstream>;
# include <climits>;
# include <cfloat>;
# include <stdlib.h>;

class ScalarConverter
{
	private:
        ScalarConverter();
		ScalarConverter(ScalarConverter &src);
		~ScalarConverter();
        
	    static bool				checkChar(std::string const &str);
	    static bool				checkInt(std::string const &str);
	    static bool				checkFloat(std::string const &str);
	    static bool				checkDouble(std::string const &str);
	    static void				printChar(std::string const &str);
	    static void				printInt(std::string const &str);
	    static void				printFloat(std::string const &str);
	    static void				printDouble(std::string const &str);
	
	public:
	    ScalarConverter			&operator=(const ScalarConverter &rhs);

	static void				convert(std::string const &str);
};

#endif