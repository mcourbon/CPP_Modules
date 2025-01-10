/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourbon <mcourbon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:35:21 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 15:29:09 by mcourbon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array {
    private:
        T       *_array;
        size_t  _size;

    public:
        Array() : _size(0), _array(new T[_size]) {};
        Array(unsigned int n) {
            this->_size = n;
            this->_array = new T[_size];
        }
        Array(const Array &src) : _size(src._size), _array(new T[src._size]) {
            for (int i = 0; i < src.size(); i++) {
                this->_array[i] = src->_array[i];
            }
        }
        ~Array() {
            delete[] this->_array;
        }
        Array &operator=(const Array &rhs) {
            if (this != rhs) {
                this->_size = rhs.size();
                delete []this->_array;
                this->_array = new T[this->_size];
                for (size_t i = 0; i < this->_size; i++) {
                    this->_array[i] = rhs->_array[i];
                }
            }
            return *this;
        }
        T &operator[](size_t index) {
            if (index >= this->_size)
                throw std::out_of_range("Index not in the range");
            return this->_array[index];
        }
        size_t size() const {
            return this->_size;
        }
};

#endif