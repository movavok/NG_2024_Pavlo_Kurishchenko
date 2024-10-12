#include <iostream>
using namespace std;

int main() {
    double a, b, res;
    char oper;
    cout<< "Enter first number   ";
    cin >> a;
    cout<< "Enter second number   ";
    cin >> b;
    cout<< "Enter math operation( + , - , * , / )   ";
    cin >> oper;
    switch(oper){
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
    }
    
    cout << "The result is " << res << endl;

    return 0;
}