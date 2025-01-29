//
// Created by charm on 15/11/2023.
//

#ifndef PROJECT14_RPN_RPN_H
#define PROJECT14_RPN_RPN_H

#include <iostream>
#include <string>
#include <cmath>
#include <stack>

class RPN {
private:
    double evaluate(int left, char op, int right);

public:
    static double evaluate(const std::string &postfixExpression);
};


#endif //PROJECT14_RPN_RPN_H
