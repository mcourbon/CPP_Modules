/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:08:04 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/19 19:08:38 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		void	executeConcrete() const;
		RobotomyRequestForm();
	public:
				RobotomyRequestForm(const std::string &target);
				RobotomyRequestForm(const RobotomyRequestForm &src);
				~RobotomyRequestForm();  

		void	execute(const Bureaucrat &executor);
	
		RobotomyRequestForm		&operator=(const RobotomyRequestForm &other);
};

#endif