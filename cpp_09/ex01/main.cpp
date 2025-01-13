/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 19:10:02 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/12 19:16:30 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int ft_cerror(string str) {
    cerr << str << endl;
    return 1;
}

int main(int ac, char **av) {
    RPN rpn;

    if (ac != 2) {
        return ft_cerror("Wrong argument number\nCorrect usage: ./rpn \"operation\"");
    }
    if (!rpn.checkExpression(av[1])) {
        return ft_cerror("Expression is not in the correct format");
    }
    switch (rpn.solveExpression(av[1])) {
        case DIVIDE_BY_ZERO :
            return ft_cerror("Error: Solving expression implies dividing by 0");
            break;
        case UNSOLVABLE :
            return ft_cerror("Error: Expression unsolvable");
            break;
        case OVERFLOW :
            return ft_cerror("Error: Result overflowing INT_MAX");
            break;
        case SOLVED :
            return 0;
            break;
    }
    return 0;
}