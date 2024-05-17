/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:03:56 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/30 11:38:18 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {

    private:
        void    debug();
        void    info();
        void    warning();
        void    error();

    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
};

#endif