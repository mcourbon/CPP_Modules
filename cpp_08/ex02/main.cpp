/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:49:06 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 12:18:05 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
    cout << "-----SUBJECT-----" << endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    cout << "Last Element: " << mstack.top() << endl << "!POP!" << endl;
    mstack.pop();
    cout << "size: " << mstack.size() << endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(222);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        cout << *it << endl;
        ++it;
    }
    
    cout << "-----LIST-----" << endl;
    list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    cout << "Last element: " << lstack.back() << endl << "!POP!" << endl;
    lstack.pop_back();
    cout << "size: " << lstack.size() << endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(222);
    lstack.push_back(0);
    list<int>::iterator it_list = lstack.begin();
    list<int>::iterator ite_list = lstack.end();
    ++it_list;
    --it_list;
    while (it_list != ite_list) {
        cout << *it_list << endl;
        ++it_list;
    }

    cout << "-----ITERATOR-----" << endl;
    MutantStack<int> mutantStack;
    mutantStack.push(5);
    mutantStack.push(15);
    mutantStack.push(25);
    mutantStack.push(35);
    mutantStack.push(45);
    cout << "Iterate:" << endl;
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl << "Reverse Iterate:" << endl;
    for (MutantStack<int>::iterator it = mutantStack.end() - 1; it >= mutantStack.begin(); it--) {
        cout << *it << " ";
    }
    cout << endl << "Const Iterate:" << endl;
    for (MutantStack<int>::const_iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl << "Const Reverse Iterate:" << endl;
    for (MutantStack<int>::const_iterator it = mutantStack.end() -1; it >= mutantStack.begin(); it--) {
        cout << *it << " ";
    }
    return 0;
}