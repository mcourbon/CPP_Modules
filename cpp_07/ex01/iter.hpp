/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:34:50 by shifterpro        #+#    #+#             */
/*   Updated: 2024/09/19 15:37:13 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstring>

template <typename T, typename F>
void    iter(T *array, size_t length, F func) {
    size_t i;
    for (i = 0; i < length; i++)
        func(array[i]);
}

#endif