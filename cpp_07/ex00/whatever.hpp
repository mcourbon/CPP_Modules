/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:27:13 by shifterpro        #+#    #+#             */
/*   Updated: 2024/09/19 15:32:14 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename Tswap>

void swap(Tswap &a, Tswap &b) {
    Tswap temp = a;
    a = b;
    b = temp;
}

template <typename Tmin>

Tmin &min(Tmin &a, Tmin &b) {
    if (b <= a)
        return b;
    return a;
}

template <typename Tmax>

Tmax &max(Tmax &a, Tmax &b) {
    if (b >= a)
        return b;
    return a;
}

#endif