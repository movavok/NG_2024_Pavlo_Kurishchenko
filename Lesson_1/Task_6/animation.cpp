#include <iostream>
#include <windows.h>
using namespace std;

void delay(int deltime){ // Функция задержки

    Sleep(deltime);
    system("cls");

}

void tri(int hgt, char type){ // Функция создания треугольника

    int nstar, nspace;
    switch(type){
        case 'n':
            nstar = 1;
            while(hgt > 0){
                for (int i = 0; i < nstar; i++){
                    cout << "*";
                }

                hgt--;
                cout << endl;
                nstar++;
            }
            break;
        case '1':
            nstar = 1;
            nspace = hgt;
            while(hgt > 0){
                for (int i = 1; i < nspace; i++){
                    cout << " ";
                }
                for (int i = 0; i < nstar; i++){
                    cout << "*";
                }
                hgt--;
                cout << endl;
                nspace--;
                nstar++;
            }
            break;
        case '2':
            nstar = hgt;
            nspace = 0;
            while(hgt > 0){
                for (int i = 0; i < nspace; i++){
                    cout << " ";
                }
                for (int i = 0; i < nstar; i++){
                    cout << "*";
                }
                hgt--;
                cout << endl;
                nspace++;
                nstar--;
            }
            break;
        case '3':
            nstar = hgt;
            nspace = 0;
            while(hgt > 0){
                for (int i = 0; i < nstar; i++){
                    cout << "*";
                }
                for (int i = 0; i < nspace; i++){
                    cout << " ";
                }

                hgt--;
                cout << endl;
                nspace++;
                nstar--;
            }
            break;
    }
}

int main() {

    cout << "Введи высоту триугольника (целое число > 2) - "; // Ввод размера
    int hgt;
    cin >> hgt;
    cout << "Введи время задержки (в миллисекундах > 100) - "; // Ввод задержки
    int deltime;
    cin >> deltime;
    system("cls");

    if (hgt <= 2 || deltime <= 99){ // Валидатор) - выучил слово на паре у Доринского

        cout << "Невалидные значения высоты или времени задержки ,_,";
        return 1;

    }

    char type = 'n';

    for(int i = 0; i < 21; i++) {

        tri(hgt, type);
        delay(deltime);
        switch(type){ // Меняем триугольник
            case 'n':
                type = '1';
                break;
            case '1':
                type = '2';
                break;
            case '2':
                type = '3';
                break;
            case '3':
                type = 'n';
                break;
        }
    }
    return 0;
}