//
// Created by charm on 15/11/2023.
//

#include "rpn.h"

double RPN::evaluate(int left, char op, int right){
    if(op == '+'){
        return(left + right);
    }
    else if(op == '-'){
        return(left - right);
    }
    else if(op == '*'){
        return(left * right);
    }
    else if(op == '/'){
        return(left / right);
    }
    else if(op == '^'){
        return(pow(left, right));
    }
}

double RPN::evaluate(const std::string &postfixExpression){
    std::stack<double> stack;
    RPN rpn;
    for (int i = 0; i < postfixExpression.size(); ++i) {
        if (postfixExpression[i] != '+' && postfixExpression[i] != '-' && postfixExpression[i] != '*' && postfixExpression[i] != '/' && postfixExpression[i] != '^') {
            stack.push(static_cast<double>(postfixExpression[i] - '0'));
        }
        else{
            double right = stack.top();
            stack.pop();
            double left = stack.top();
            stack.pop();
            stack.push(rpn.evaluate(left, postfixExpression[i], right));
        }
    }
    return(stack.top());
}