#include <iostream>
using namespace std;

int main() {
    
    double num1, num2, res; 
    char oper;
    
    cout<< "Enter two numbers and an operation to calculate a formula like (number1 operation number2 = result)\n";
    
    cout<< "Enter first number >> ";
    cin >> num1;
    
    cout<< "Enter second number >> ";
    cin >> num2;
    
    cout<< "Enter math operation( + or - or * or / ) >> ";
    cin >> oper;
    
    switch(oper){
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
    }
    
    cout << "The result is " << res << endl;

    return 0;

}