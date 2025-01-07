/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:42:47 by shifterpro        #+#    #+#             */
/*   Updated: 2024/12/21 11:55:50 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat hello("hello", 2);
        std::cout << hello << std::endl;
        hello.increaseGrade();
        std::cout << hello << std::endl;
        hello.decreaseGrade();
        std::cout << hello << std::endl;
        hello.increaseGrade();
        hello.increaseGrade();
        std::cout << hello << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return (1);
    }
    return (0);
}