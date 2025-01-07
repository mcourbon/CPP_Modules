/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:42:47 by shifterpro        #+#    #+#             */
/*   Updated: 2024/12/21 11:56:15 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat Jean("Jean", 42);
		Form form("Entree a Harvard", 10, 10);
		std::cout << form << std::endl;
		Jean.signForm(form);

		Form form2("Entree a 42", 42, 10);
		std::cout << form2 << std::endl;
		Jean.signForm(form2);
        std::cout << form2 << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return 0;
}