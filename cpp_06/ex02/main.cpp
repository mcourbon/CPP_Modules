/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:46:14 by shifterpro        #+#    #+#             */
/*   Updated: 2024/09/12 10:51:42 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base    *generate(void) {
    int nb = rand();

    if ((nb % 3) == 0) {
        std::cout << "A base generated" << std::endl;
        return (new A());
    }
    else if ((nb % 3) == 1) {
        std::cout << "B base generated" << std::endl;
        return (new B());
    }
    if ((nb % 3) == 2) {
        std::cout << "C base generated" << std::endl;
        return (new C());
    }
    else {
        std::cout << "Base have not been generated" << std::endl;
        return (NULL);
    }
}

void    identify(Base *p) {
    if (dynamic_cast<A *>(p) != NULL) {
        std::cout << "pointer -> Base of type A found" << std::endl;
        return ;
    }
    else if (dynamic_cast<B *>(p) != NULL) {
        std::cout << "pointer -> Base of type B found" << std::endl;
        return ;
    }
    else if (dynamic_cast<C *>(p) != NULL) {
        std::cout << "pointer -> Base of type C found" << std::endl;
        return ;
    }
    else {
        std::cout << "pointer -> Base is not a type A, B or C" << std::endl;
    }
}

void    identify(Base& p) {
    Base test;

    try {
        test = dynamic_cast<A&>(p);
        std::cout << "ref -> Base of type A found" << std::endl;
    }
    catch (...) {};
    try {
        test = dynamic_cast<B&>(p);
        std::cout << "ref -> Base of type B found" << std::endl;
    }
    catch (...) {};
    try {
        test = dynamic_cast<C&>(p);
        std::cout << "ref -> Base of type C found" << std::endl;
    }
    catch (...) {};
}

int main() {
    Base *base;

    srand(time(NULL));
    base = generate();
    identify(base);
    identify(*base);
    delete base;
    return 0;
}