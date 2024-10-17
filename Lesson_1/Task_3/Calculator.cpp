#include <iostream>
using namespace std;

int main() {
    double num1, num2, res; // Поменял переменные а и б на ном1, ном2
    char oper;
    cout<< "Enter first number   ";
    cin >> num1;
    cout<< "Enter second number   ";
    cin >> num2;
    cout<< "Enter math operation( + , - , * , / )   ";
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