/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:41:24 by shifterpro        #+#    #+#             */
/*   Updated: 2024/09/17 16:12:17 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern {
    private:

    public:
        Intern();
        Intern(const Intern& src);
        ~Intern();

        Intern& operator=(const Intern& rhs);

        AForm* makeForm(const std::string &name, const std::string &target);

        class FormNotFoundException: public std::exception {
            virtual const char *what() const throw();
        };
};

#endif