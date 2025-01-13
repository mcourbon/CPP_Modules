/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 08:43:12 by shifterpro        #+#    #+#             */
/*   Updated: 2025/01/13 08:46:11 by shifterpro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <sstream>
# include <ctime>
# include <algorithm>
# include <cstdlib>
# include <limits.h>
# include <ctime>

using std::string;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;
using std::pair;
using std::make_pair;
using std::deque;
using std::istringstream;
using std::ostream;
using std::sort;
using std::max;
using std::min;
using std::strtol;

bool ft_cerror(string error);

void fordJohnsonSort(vector<int>& arr);
void fordJohnsonSort(deque<int>& arr);

ostream &operator<<(ostream &out, const vector <pair<int, int> > &pairs);
ostream &operator<<(ostream &out, const vector <int> &vec);
ostream &operator<<(ostream &out, const deque <int> &deq);
ostream &operator<<(ostream &out, const vector<vector<int> > &matrix);

#endif