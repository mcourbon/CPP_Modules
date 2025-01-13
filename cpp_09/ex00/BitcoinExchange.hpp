/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:38:23 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/12 17:27:35 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <list>
# include <map>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <ctype.h>

using std::string;
using std::map;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;
using std::cerr;
using std::getline;
using std::ws;

# define CORRECT_INPUT 4
# define NO_ERRORS 0
# define INPUT_ERROR 2
# define DATE_ERROR 5
# define NUMBER_ERROR 6
# define DATE_INVALID 7
# define NEGATIVE_VALUE 1
# define NUMBER_TOO_BIG 3

class BitcoinExchange {
    private:
        map<string, double> _csv;

    public:
        BitcoinExchange &operator=(BitcoinExchange const &rhs);
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &src);
        ~BitcoinExchange();

        void initMap(ifstream &csvFile);
        void printCSV();
        void processInfo(ifstream &inputFile);
        void printLine(string &line);
};

int parseLine(string &line);
void chooseError(int status, string line);

#endif