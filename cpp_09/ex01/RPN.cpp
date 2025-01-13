    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   RPN.cpp                                            :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: shifterpro <shifterpro@student.42.fr>      +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2025/01/12 18:56:26 by shifterpro        #+#    #+#             */
    /*   Updated: 2025/01/12 19:09:26 by shifterpro       ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */

    #include "RPN.hpp"

    RPN::RPN() {}

    RPN::~RPN() {}

    RPN::RPN(RPN const &src) {
        (void)src;
        *this = src;
    }

    RPN &RPN::operator=(RPN const &rhs) {
        (void)rhs;
        return *this;
    }

    bool RPN::checkExpression(string expression) {
        int operandCount = 0;
        int operatorCount = 0;
        char c;

        for (size_t i = 0; i < expression.length(); ++i) {
            c = expression[i];
            if (isspace(c)) {
                continue;
            }
            else if (isdigit(c) || c == '+' || c == '-' || c == '*' || c == '/') {
                if (isdigit(c)) {
                    operandCount++;
                }
                else {
                    operatorCount++;
                }
            }
            else {
                return false;
            }
        }
        return (operandCount == operatorCount + 1);
    }

    int RPN::solveExpression(string expression) {
        stack<int> operandStack;
        istringstream iss(expression);
        string token;
        int operand1, operand2;
        long check;

        while (iss >> token) {
            if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1 && isdigit(token[1]))) {
                operandStack.push(atoi(token.c_str()));
            }
            else {
                if (operandStack.size() < 2) {
                    return UNSOLVABLE;
                }
                operand2 = operandStack.top();
                operandStack.pop();
                operand1 = operandStack.top();
                operandStack.pop();
                check = static_cast<long>(operand1) + static_cast<long>(operand2);
                if (check > INT_MAX) {
                    return OVERFLOW;
                }
                check = static_cast<long>(operand1) * static_cast<long>(operand2);
                if (check > INT_MAX) {
                    return OVERFLOW;
                }
                if (token == "+") {
                    operandStack.push(operand1 + operand2);
                }
                else if (token == "-") {
                    operandStack.push(operand1 - operand2);
                }
                else if (token == "*") {
                    operandStack.push(operand1 * operand2);
                }
                else if (token == "/") {
                    if (operand2 == 0) {
                        return DIVIDE_BY_ZERO;
                    }
                    operandStack.push(operand1 / operand2);
                }
                else {
                    return UNSOLVABLE;
                }
            }
        }
        if (operandStack.size() == 1) {
            cout << "Expression Solved" << endl << "Result = " << operandStack.top() << endl;
            return SOLVED;
        }
        else {
            return UNSOLVABLE;
        }
    }