/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:55:13 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 11:02:30 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <math.h>
#include <exception>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

class Span {
    private:
        unsigned int    _N;
        vector<int>     _container;

    public:
        Span(const Span &src);
        Span    &operator=(const Span &rhs);
        Span();
        Span(unsigned int N);
        ~Span();

        void    printSpan();
        void    addNumber(int N);
        void    addNumbers(int N, int nb);
        int     shortestSpan();
        int     longestSpan();
};

#endif