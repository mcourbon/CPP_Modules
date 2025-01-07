/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:43:45 by shifterpro        #+#    #+#             */
/*   Updated: 2024/10/10 10:52:32 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradetosign(150), _gradetoexec(150)
{}

Form::Form(std::string const &name, const int &gradetosign, const int &gradetoexec) : _name(name), _signed(false), _gradetosign(gradetosign), _gradetoexec(gradetoexec) {
    if (gradetosign > 150 || gradetoexec > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (gradetosign < 1 || gradetoexec < 1)
        throw(Bureaucrat::GradeTooHighException());
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _gradetosign(src.getGradeToSign()), _gradetoexec(src.getGradeToExec()) 
{}

Form::~Form()
{}

Form        &Form::operator=(const Form &src) {
    if (this != &src)
        this->_signed = src.getSigned();
    return (*this);
}

bool        Form::getSigned() const {
    return (this->_signed);
}

std::string Form::getName() const {
    return (this->_name);
}

int         Form::getGradeToSign() const {
    return (this->_gradetosign);
}

int         Form::getGradeToExec() const {
    return (this->_gradetoexec);
}

void        Form::beSigned(const Bureaucrat &src) {
    if (src.getGrade() > this->getGradeToSign())
        throw Bureaucrat::GradeTooLowException();
    this->_signed = true;
}

std::ostream    &operator<<(std::ostream &o, Form &i) {
    o << i.getName() << "[" << i.getSigned() << "]" << std::endl;
    o << "\t - required sign grade : " << i.getGradeToSign() << std::endl;
    o << "\t - required execution grade : " << i.getGradeToExec() << std::endl;
    return o;
}