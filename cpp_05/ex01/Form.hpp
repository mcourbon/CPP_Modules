/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:43:43 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/12 19:48:54 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradetosign;
        const int           _gradetoexec;
        Form();
        
    public:
        Form(std::string const &name, const int &gradetosign, const int &gradetoexec);
        Form(const Form &src);
        ~Form();
        Form    &operator=(const Form &src);
        
        std::string         getName() const;
        bool                getSigned() const;
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;
        
        void                beSigned(const Bureaucrat &s);
};

std::ostream    &operator<<(std::ostream &o, Form &i);

#endif