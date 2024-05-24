/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:34:38 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/24 17:26:16 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define RED "\033[31m"
# define BLUE "\033[34m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"
# define UNDER "\033[4m"
# define BOLD "\033[1m"

# include "Animal.hpp"

class Brain {
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &src);
        ~Brain();

        Brain &operator=(const Brain &rhs);
};

#endif