/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:09:07 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/19 19:13:40 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) {
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) {
    if (!this->_signed)
        throw ExecUnsignedException();
    if (this->_gradetoexec < executor.getGrade())
        throw GradeTooLowException();
    this->executeConcrete();
}

void    RobotomyRequestForm::executeConcrete() const {
    if (rand() % 2)
        std::cout << this->_target << " has been succesfully robotomized" << std::endl;
    else
        std::cout << "robotomy on " << this->_target << " failed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if(this != &other) {}
    return *this;
}