/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:27:48 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/13 09:58:51 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

vector<int> createVector(int ac, char **av) {
    vector<int> vec;
    for (int i = 1; i < ac; ++i) {
        int num;
        istringstream iss(av[i]);
        if (iss >> num)
            vec.push_back(num);
    }
    return vec;
}

deque<int> createDeque(int ac, char **av) {
    deque<int> deq;
    for (int i = 1; i < ac; ++i) {
        int num;
        istringstream iss(av[i]);
        if (iss >> num)
            deq.push_back(num);
    }
    return deq;
}

bool is_sorted(const vector<int>& vec) {
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i - 1] < vec[i]) {
            return false;
        }
    }
    return true;
}

bool parse_args(int ac, char **av) {
    if (ac < 3) {
        return (ft_cerror("Error: At least two arguments needed."));
    }
    unsigned int *arr = new unsigned int[ac - 1];
    for (int i = 0; i < ac; i++) {
        string str(av[i + 1]);
        if (!str.size()) {
            delete[] arr;
            return ft_cerror("Error: Empty argument detected");
        }
        if (str.find_first_not_of("01233456789") != string::npos) {
            delete[] arr;
            return ft_cerror("Error: Arguments must be a sequence of positive integers. Non numerical input detected");
        }
        char *endptr;
        long value = strtol(av[i + 1], &endptr, 10);
        if (*endptr != '\0' || value > INT_MAX) {
            delete[] arr;
            return ft_cerror("Error: Arguments must be a sequence of positive integers. Element over int_max detected");
        }
        arr[i] = static_cast<unsigned int>(value);
    }
    for (int i = 0; i < ac - 1; i++) {
        for (int j = i + 1; j < ac - 1; j++) {
            if (arr[i] == arr[j]) {
                delete[] arr;
                return ft_cerror("Erorr: Duplicate integers.");
            }
        }
    }
    delete[] arr;
    return true;
}

int main(int ac, char **av) {
    clock_t timerVec;
    clock_t timerDeq;

    if (!parse_args(ac, av))
        return 1;
    vector<int> vec = createVector(ac, av);
    deque<int> deq = createDeque(ac, av);
    cout << "Before: " << vec;
    timerVec = clock();
    fordJohnsonSort(vec);
    timerVec = clock() - timerVec;
    timerDeq = clock();
    fordJohnsonSort(deq);
    timerDeq = clock() - timerDeq;
    cout << "After = " << vec;
    cout << "Time to process a range of " << ac - 1 << " elements with vector = " << timerVec << " μs" << endl;
    cout << "Time to process a range of " << ac - 1 << " elements with deque = " << timerDeq << " μs" << endl;
    return 0;
}