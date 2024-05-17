/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:56:35 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/06 15:33:48 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    private:
        int                 fixedNbrComa;
        static const int    nbrBit = 8;
        
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        Fixed& operator+(const Fixed& other);
        Fixed& operator-(const Fixed& other);
        Fixed& operator*(const Fixed& other);
        Fixed& operator/(const Fixed& other);
        ~Fixed();
        
        int     getRawBits() const;
        void    setRawBits(int const raw);

        float toFloat() const;
        int toInt() const;

        static min(&, &);
        static min();
        static max();
        static max();
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
std::ostream & operator>>(std::ostream & o, Fixed const & i);
std::ostream & operator>=(std::ostream & o, Fixed const & i);
std::ostream & operator<=(std::ostream & o, Fixed const & i);
std::ostream & operator==(std::ostream & o, Fixed const & i);
std::ostream & operator!=(std::ostream & o, Fixed const & i);

#endif