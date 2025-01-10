/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:35:03 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 11:42:17 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    {
        Span sp = Span(5);
        cout << "-----CONTAINER WITH 5 NUMBERS-----" << endl;
        sp.addNumber(5);
        sp.addNumber(15);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(22);
        sp.printSpan();
        cout << "-----EXCEPTION-----" << endl;
        try {
            sp.addNumber(9);
        }
        catch (std::exception &e) {
            cout << e.what() << endl;
        }
        cout << endl << "Shortest span = " << sp.shortestSpan() << endl << "Longest span = " << sp.longestSpan() << endl << endl;
    }
    {
        Span sp = Span(10000);
        cout << "-----CONTAINER WITH 10000 NUMBERS FILLED WITH '2'-----" << endl;
        sp.addNumbers(2, 10000);
        cout << endl << "-----EXCEPTION-----" << endl;
        try {
            sp.addNumber(14);
        }
        catch (std::exception &e) {
            cout << e.what() << endl;
        }
        cout << endl << "Shortest span = " << sp.shortestSpan() << endl << "Longest span = " << sp.longestSpan() << endl << endl;
    }
}