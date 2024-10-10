/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 19:12:04 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/19 19:12:33 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		void	executeConcrete() const;
		ShrubberyCreationForm();
	public:
				ShrubberyCreationForm(const std::string &target);
				ShrubberyCreationForm(const ShrubberyCreationForm &src);
				~ShrubberyCreationForm();  

		void	execute(const Bureaucrat &executor);
	
		ShrubberyCreationForm		&operator=(const ShrubberyCreationForm &other);
};

#endif