/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:41:57 by mfinette          #+#    #+#             */
/*   Updated: 2024/12/29 14:02:18 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdlib.h>
#include "Intern.hpp"

int	main() {
	Bureaucrat	Alexandre("Alexandre", 1);
	Intern		Guillaume;
	AForm		*form;
	
	srand(time(NULL));

	std::cout << "------------------------" << std::endl;
	std::cout << "Robotomy request form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	try {
		form = Guillaume.makeForm("robotomy request", "Jack");
		Alexandre.signForm(*form);
		Alexandre.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "Shrubbbery Creation form : " << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		form = Guillaume.makeForm("shrubbery creation", "Home");
		Alexandre.signForm(*form);
		Alexandre.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Presidential Pardon form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	try {
		form = Guillaume.makeForm("presidential pardon", "John");
		Alexandre.signForm(*form);
		Alexandre.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Trying to create a non existing form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	try {
		form = Guillaume.makeForm("Not a Form", "Nobody");
		Alexandre.signForm(*form);
		Alexandre.executeForm(*form);
		delete form;
	}
	catch (std::exception &e){
		std::cout << "Error : " << e.what() << std::endl;
	}
}