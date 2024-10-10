/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:38:36 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/19 19:06:54 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) {
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) {
    if (!this->_signed)
        throw ExecUnsignedException();
    if (this->_gradetoexec < executor.getGrade())
        throw GradeTooLowException();
    this->executeConcrete();
}

void    PresidentialPardonForm::executeConcrete() const {
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if(this != &other) {}
    return *this;
}