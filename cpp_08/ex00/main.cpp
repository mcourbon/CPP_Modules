/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:29:12 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/10 10:39:21 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(3);
    myVector.push_back(5);
    myVector.push_back(7);
    myVector.push_back(9);
    int valueToFindVector = 7;

    vector<int>::iterator itVector = easyfind(myVector, valueToFindVector);
    cout << "---Vector---" << endl;
    if (itVector != myVector.end()) {
        cout << "Value " << valueToFindVector << " found in the vector at position: " << distance(myVector.begin(), itVector) << endl << endl;
    }
    else {
        cout << "Value " << valueToFindVector << " not found in the vector..." << endl;
    }
    
    list<int> myList;
    myList.push_back(2);
    myList.push_back(4);
    myList.push_back(6);
    myList.push_back(8);
    myList.push_back(10);
    int valueToFindList = 4;

    list<int>::iterator itList = easyfind(myList, valueToFindList);
    cout << "---List---" << endl;
    if (itList != myList.end()) {
        cout << "Value " << valueToFindList << " found in the list at position: " << distance(myList.begin(), itList) << endl << endl;
    }
    else {
        cout << "Value " << valueToFindList << " not found in the list..." << endl;
    }
    
    return 0;
}