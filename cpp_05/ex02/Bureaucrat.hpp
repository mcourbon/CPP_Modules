/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:20:50 by shifterpro        #+#    #+#             */
/*   Updated: 2024/12/21 11:49:54 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {
    private:
        int          _grade;
        const std::string _name;
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

        void            signForm(AForm &form);
        void            executeForm(AForm &form);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i);

#endif