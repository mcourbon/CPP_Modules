/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:27:15 by shifterpro        #+#    #+#             */
/*   Updated: 2024/10/10 11:47:27 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _grade(1), _name("Default") {
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _grade(src._grade), _name(src._name) {
    std::cout << "Copy constructor called for : " << this->_name << " (grade = " << this->_grade << ")" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _grade(grade), _name(name) {
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
    if (this != &rhs)
        this->_grade = rhs.getGrade();
    return (*this);
}

int         Bureaucrat::getGrade() const {
    return (this->_grade);
}

std::string Bureaucrat::getName() const {
    return (this->_name);
}

void        Bureaucrat::decreaseGrade() {
    if (this->_grade > 149)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void        Bureaucrat::increaseGrade() {
    if (this->_grade < 2)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

const char  *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char  *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i) {
    o << i.getName() << ": grade [" << i.getGrade() << "]";
    return (o);
}

void    Bureaucrat::signForm(AForm &form) {
    try {   
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because : " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm &form) {
    try {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}