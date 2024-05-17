/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:59:42 by shifterpro        #+#    #+#             */
/*   Updated: 2024/04/29 17:38:10 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av) {
    char        *filename;
    std::string line;

    if (ac != 4) {
        std::cerr << "Use as follows : ./SedForLosers filename s1 s2" << std::endl;
        return (1);
    }
    filename = av[1];
    std::string s1 = std::string(av[2]);
    std::string s2 = std::string(av[3]);
    std::ifstream   file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return (1);
    }
    std::ofstream   outfile(std::string(filename).append(".replace").c_str());
    
    int i;
    while (std::getline(file, line)) {
        i = 0;
        while (i < (int)line.size()) {
            if (line.substr(i, s1.size()) == s1) {
                outfile << s2;
                i += s1.size();
            }
            else {
                outfile << line[i];
                i++;
            }
        }
        outfile << "\n";
    }
    file.close();
    outfile.close();
    return (0);
}
