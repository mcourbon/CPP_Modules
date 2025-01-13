/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:22:00 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/12 17:51:04 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int ft_cerr(string str) {
    cerr << str << endl;
    return 1;
}

int main(int ac, char **av) {
    BitcoinExchange Data;

    if (ac != 2) {
        return ft_cerr("Argument error\nUsage: ./btc \"filename\"");
    }
    ifstream inputFile(av[1], ifstream::in);
    ifstream csvFile("data.csv", ifstream::in);
    if (!inputFile.is_open() || !csvFile.is_open()) {
        return ft_cerr("Problem opening files");
    }
    Data.initMap(csvFile);
    // Data.printCSV();
    Data.processInfo(inputFile);
}   