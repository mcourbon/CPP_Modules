/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:12:52 by shifterpro        #+#    #+#             */
/*   Updated: 2024/10/10 11:08:29 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) {
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) {
    if (!this->_signed)
        throw ExecUnsignedException();
    if (this->_gradetoexec < executor.getGrade())
        throw GradeTooLowException();
    this->executeConcrete();
}

void    ShrubberyCreationForm::executeConcrete() const {
    std::fstream fs;

    fs.open((this->_target + "_shrubbery").c_str(), std::fstream::out | std::fstream::trunc);

    if (!fs.good())
        std::cerr << "Error while opening Shrubbery target file" << std::endl;

    fs <<
    "              ,@@@@@@@,\n"
    "      ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    "   ,&%%&%&&%,@@@@@/@@@@@@,8888/88/8o\n"
    "   ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'\n"
    "   %&&%&%&/%&&%@@/@@/ /@@@88888/88888'\n"
    "   %&&%/ %&%%&&@@/ V /@@' `88/8 `/88'\n"
    "   `&%/ ` /%&'    |.|        / '|8'\n"
    "      |o|        | |         | |\n"
    "      |.|        | |         | |\n"
    "   \\/ ._///_/__/  ,/_//__\\/.  /_//__/_;\n";
    fs.close();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if(this != &other) {}
    return *this;
}