/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:43:15 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 12:11:30 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <list>

using std::cout;
using std::endl;
using std::stack;
using std::list;

template <typename T>
class MutantStack : public stack<T> {
    private:
    
    public:
        MutantStack() {};
        MutantStack(const MutantStack &src) : stack<T>(src) {};
        ~MutantStack() {this->c.clear();};
        MutantStack &operator=(const MutantStack &rhs) {
            if (rhs != *this)
                this->c = rhs.c;
            return *this;
        }
        
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const {
            return this->c.begin();
        };
        const_iterator end() const {
            return this->c.end();
        };

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {
            return this->c.begin();;
        };
        iterator end() {
            return this->c.end();
        };
};

#endif