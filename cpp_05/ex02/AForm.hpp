/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:23:37 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/19 18:31:04 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    protected:
        const std::string   _name;
        const std::string   _target;
        bool                _signed;
        const int           _gradetosign;
        const int           _gradetoexec;
        AForm();

    public:
        AForm(std::string const &name, const std::string &target, const int &gradetosign, const int &gradetoexec);
	    AForm(const AForm &src);
		~AForm();
		AForm               &operator=(const AForm &src);

        std::string         getName() const;
        bool                getSigned() const;
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;

        void                beSigned(const Bureaucrat &b);
        virtual void        execute(const Bureaucrat &executor) = 0;

        class GradeTooLowException: public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooHighException: public std::exception {
            virtual const char* what() const throw();
        };
        class AlreadySignedException: public std::exception {
            virtual const char* what() const throw();
        };
        class ExecUnsignedException: public std::exception {
            virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, AForm &src);

#endif