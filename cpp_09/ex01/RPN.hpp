/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:55:00 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/12 18:56:22 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>
# include <string>
# include <cstdlib>
# include <limits.h>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::stack;
using std::istringstream;

#define DIVIDE_BY_ZERO 0
#define UNSOLVABLE 1
#define SOLVED 2
#define OVERFLOW 3

class RPN {
    public:
        RPN();
        ~RPN();
        RPN(RPN const &src);
        RPN &operator=(RPN const &rhs);
        bool checkExpression(string expression);
        int solveExpression(string expression);
};

#endif