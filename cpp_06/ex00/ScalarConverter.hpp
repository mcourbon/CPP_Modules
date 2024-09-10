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
        
	    static bool				checkChar(string const &str);
	    static bool				checkInt(string const &str);
	    static bool				checkFloat(string const &str);
	    static bool				checkDouble(string const &str);
	    static void				printChar(string const &str);
	    static void				printInt(string const &str);
	    static void				printFloat(string const &str);
	    static void				printDouble(string const &str);
	
	public:
	    ScalarConverter			&operator=(const ScalarConverter &rhs);

	static void				convert(string const &str);
};

#endif