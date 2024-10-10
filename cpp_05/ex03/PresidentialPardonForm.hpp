/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:38:38 by shifterpro        #+#    #+#             */
/*   Updated: 2024/06/19 19:07:02 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		void	executeConcrete() const;
		PresidentialPardonForm();
	public:
				PresidentialPardonForm(const std::string &target);
				PresidentialPardonForm(const PresidentialPardonForm &src);
				~PresidentialPardonForm();  

		void	execute(const Bureaucrat &executor);
	
		PresidentialPardonForm		&operator=(const PresidentialPardonForm &other);
};

#endif