#include <iostream>
using namespace std;

int main() {
    
    string earn;
    cout << "Если не секрет, напиши (число) сколько ты зарабатываешь?";
    cin >> earn;
    int len = earn.length();
    
    switch(len){
        case(1):
        case(2):
        case(3):
            cout << "Нужно больше работать!!!";
            break;
        case(4):
        case(5):
        case(6):
            cout << "Красавец";
            break;
        case(7):
        case(8):
        case(9):
            cout << "Ты миллионер<3";
            break;
        default:
            cout << "Миллиардер??";
    }

    return 0;
}