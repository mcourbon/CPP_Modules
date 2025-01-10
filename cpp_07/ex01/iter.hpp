/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:34:50 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/07 13:27:44 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstring>

template <typename T>
void    iter(T *array, size_t length, void(*f)(T const &)) {
    size_t i;
    for (i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void    iter(T *array, size_t length, void(*f)(T &)) {
    size_t i;
    for (i = 0; i < length; i++)
        f(array[i]);
}

#endif