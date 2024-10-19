#include <iostream>
using namespace std;

int main() {
    
    int hgt; // переменная не в 1 символ)
    cout << "Введи высоту елочки (целое число > 2) - ";
    cin >> hgt;
    
    if (hgt <= 2){ 
        
        cout << "Введи положительное целое число > 2";
        return 1;
        
    }
    
    int nstar = 1;
    int nspace = hgt - 1;
    
    while(hgt > 0, hgt--){ // скоротил
    for (int i = 0; i < nspace; i++) cout << " ";
    for (int i = 0; i < nstar; i++) cout << "*";
    
    nspace--;
    nstar += 2;
    cout << endl;
    }
    
    for (int i = 1; i < (nstar - 1) / 2; i++) cout << " "; // вывел пенек с цыкла
    cout << "*";

    return 0;

}