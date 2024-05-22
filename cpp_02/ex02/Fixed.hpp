/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:56:35 by shifterpro        #+#    #+#             */
/*   Updated: 2024/05/20 10:42:16 by shifterpro       ###   ########.fr       */
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
        ~Fixed();
               
        Fixed&  operator=(const Fixed& other);
        
        Fixed&  operator++();
        Fixed  operator++(int);
        Fixed&  operator--();
        Fixed  operator--(int);
        
        bool    operator<(const Fixed& other) const;
        bool    operator<=(const Fixed& other) const;
        bool    operator>(const Fixed& other) const;
        bool    operator>=(const Fixed& other) const;
        bool    operator==(const Fixed& other) const;
        bool    operator!=(const Fixed& other) const;

        Fixed   operator*(const Fixed& other) const;
        Fixed   operator/(const Fixed& other) const;
        Fixed   operator+(const Fixed& other) const;
        Fixed   operator-(const Fixed& other) const;

        static Fixed&           min(Fixed& a, Fixed& b);
        static Fixed&           max(Fixed& a, Fixed& b);
        static const Fixed&     min(const Fixed& a, const Fixed& b);
        static const Fixed&     max(const Fixed& a, const Fixed& b);
        
        int     getRawBits() const;
        void    setRawBits(int const raw);

        float   toFloat() const;
        int     toInt() const;
};

std::ostream & operator<<(std::ostream & o, const Fixed& i);

#endif