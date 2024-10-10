/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:20:50 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/10 20:39:02 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>


class Bureaucrat {
    private:
        int          _grade;
        std::string  _name;
        Bureaucrat();

    public:
        Bureaucrat(std::string const &name, int const &grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();

        Bureaucrat &operator=(Bureaucrat const &rhs);

        int             getGrade() const;
        std::string     getName() const;

        void            increaseGrade();
        void            decreaseGrade();

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i);

#endif