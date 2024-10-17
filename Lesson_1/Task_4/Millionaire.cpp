#include <iostream>
using namespace std;

int main() {
    
    cout << "Если не секрет, напиши (число) сколько ты зарабатываешь?";
    int i_earn;
    cin >> i_earn;
    string st_earn = to_string(i_earn);
    int len = st_earn.length();
    
    if (i_earn < 0) { // Ловим отрицатильные числа
        cout << "Введи натуральное целое число:)" << endl;
        return 1;  // Выводим ошибку
    }
    
    if (i_earn > 999999999){
        cout << "No way"; // если больше 100 лямов
    }
    
    if (i_earn < 1000000000){
        
        switch(i_earn) // Додумался проверить тысячу отдельно, вроде недочетов нету
        {
            case(1000):
                cout << "тысяча.. ну норм";
                break;
            default:
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
                cout << "Введи натуральное целое число:)";
        }
        }
    }

    return 0;

}