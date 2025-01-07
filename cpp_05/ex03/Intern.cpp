/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:41:21 by shifterpro        #+#    #+#             */
/*   Updated: 2024/12/21 11:41:25 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern::~Intern() {}

AForm	*Intern::makeForm(const std::string &name, const std::string &target) {
	std::string	formNames[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm	*Forms[] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	
	for (int i = 0; i < 3; i++) {
		if (name == formNames[i]) {
			std::cout << "An intern created a " << formNames[i] << std::endl;
			for (int j = 0; j < 3; j++) {
				if (j != i)
					delete(Forms[j]);
			}
			return (Forms[i]);
		}
	}
	for (int i = 0; i < 3; ++i)
		delete Forms[i];
	throw FormNotFoundException();
}

const char*	Intern::FormNotFoundException::what() const throw() {
	return "Form cannot be created by Intern";
}

Intern&		Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return *this;		
}