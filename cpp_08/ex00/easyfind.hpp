/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:26:39 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 10:55:00 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::distance;

template <typename T>
typename T::iterator easyfind(T &container, int n) {
    return std::find(container.begin(), container.end(), n);
}

#endif