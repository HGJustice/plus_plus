#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cstdlib>
#include <map>

struct Operations {
    std::string operation_symbol;
    int precedent; 
};

int calculate(std::stack<int> _values, std::stack<Operations> _operations){

}

int main(){ // 3 + 5 * 2

   std::stack<int> values;
   std::stack<Operations> ops;
   std::map<char, int> precedent {
    {'(', 0},  
    {')', 0},   
    {'+', 1},   
    {'-', 1},  
    {'*', 2},   
    {'/', 2},  
    {'^', 3}
   };

   std::string expression;
   std::cout << "Please enter expression" << "\n";
   std::getline(std::cin, expression);

   for(int i = 0; i < expression.length(); i++){

        if(expression[i] == ' '){
            continue;
        }

        if(isdigit(expression[i])){
            std::string digit_str(1, expression[i]);  
            int num = std::stoi(digit_str);
            values.push(num);
        }

        if(expression[i] == '+' || expression[i] == '-' || 
           expression[i] == '*' || expression[i] == '/' ) {
            int order = precedent.at(expression[i]);
            Operations newOp;
            newOp.operation_symbol = expression[i];
            newOp.precedent = order;

            ops.push(newOp);
        }
   }

  

   return 0;
}