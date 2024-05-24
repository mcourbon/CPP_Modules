/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:02:50 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/23 11:23:21 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define RED "\033[31m"
# define BLUE "\033[34m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"
# define UNDER "\033[4m"
# define BOLD "\033[1m"

# include <iostream>
# include <string>

class WrongAnimal {
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &rhs);

        std::string     getType() const;
        void    makeSound() const;
};

std::ostream    &operator<<(std::ostream &o, const WrongAnimal &i);

#endif