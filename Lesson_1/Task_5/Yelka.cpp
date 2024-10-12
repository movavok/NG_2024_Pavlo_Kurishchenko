#include <iostream>
using namespace std;

int main() {
    int h;
    cout << "Введи высоту елочки (целое число) - ";
    cin >> h;
    int nstar = 1;
    int nspac = h - 1;
    
    
    while(h > 0){
    for (int i = 0; i < nspac; i++){
        cout << " ";
    }
    for (int i = 0; i < nstar; i++){
        cout << "*";
    }
    cout << endl;
    switch(nspac){
        case(0):
        for (int i = 0; i < (nstar - 1) / 2; i++){
            cout << " ";
        }
        cout << "*";
    }
    nspac = nspac - 1;
    nstar = nstar + 2;
    h = h - 1;
    }

    return 0;
}