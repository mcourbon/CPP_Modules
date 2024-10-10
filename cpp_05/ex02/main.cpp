/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:41:57 by mfinette          #+#    #+#             */
/*   Updated: 2024/06/19 18:38:35 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

int	main() {
	Bureaucrat	Guillaume("Guillaume", 1);
	Bureaucrat	Alexandre("Alexandre", 42);
	std::cout << Guillaume << std::endl << Alexandre << std::endl << std::endl;

	ShrubberyCreationForm form1("home");
	PresidentialPardonForm form2("Kevin");
	RobotomyRequestForm form3("Jordan");
	srand(time(NULL));

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 1 - ShrubberyCreationForm : " << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	try {
		Guillaume.signForm(form1);
		Guillaume.executeForm(form1);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 2 - PresidentialPardonForm : " << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	try {
		Guillaume.signForm(form2);
		Guillaume.executeForm(form2);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 3 - RobotomyRequestForm : " << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	try {
		Guillaume.signForm(form3);
		std::cout << std::endl;
		std::cout << "Attempt 1 : ";
		Guillaume.executeForm(form3);
		std::cout << std::endl;
		std::cout << "Attempt 2 : ";
		Guillaume.executeForm(form3);
		std::cout << std::endl;
		std::cout << "Attempt 3 : ";
		Guillaume.executeForm(form3);
		std::cout << std::endl;
		std::cout << "Attempt 4 : ";
		Guillaume.executeForm(form3);
		std::cout << std::endl;
		std::cout << "Attempt 5 : ";
		Guillaume.executeForm(form3);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Trying to execute unsigned form : " << std::endl;
	std::cout << "---------------------------------" << std::endl;
	try {
		PresidentialPardonForm form4("Marc");
		std::cout << form4;
		Guillaume.executeForm(form4);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Trying to execute form too high for Alexandre : " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	try {
		PresidentialPardonForm form4("Marc");
		std::cout << form4 << Alexandre;
		Alexandre.executeForm(form4);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
}