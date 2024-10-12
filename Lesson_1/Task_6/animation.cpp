#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void clear(){
    #ifdef _WIN32
        system("cls"); 
    #else
        system("clear"); 
    #endif
}

void tri(char type){
    int h = 5;
    int nstar, nspac;
    switch(type){
        case 'n':
            nstar = 1;
            nspac = h - 1;
            while(h > 0){
            for (int i = 0; i < nstar; i++){
                cout << "*";
            }
                h = h - 1;
                cout << endl;
                nspac = nspac - 1;
                nstar = nstar + 1;
            }
            type = '1'; //90градусів
            break;
        case '1':
            nstar = 1;
            nspac = h - 1;
            while(h > 0){
            for (int i = 0; i < nspac; i++){
                cout << " ";
            }
            for (int i = 0; i < nstar; i++){
                cout << "*";
            }
                h = h - 1;
                cout << endl;
                nspac = nspac - 1;
                nstar = nstar + 1;
            }
            type = '2'; //180
            break;
        case '2':
            nstar = h;
            nspac = 0;
            while(h > 0){
            for (int i = 0; i < nspac; i++){
                cout << " ";
            }
            for (int i = 0; i < nstar; i++){
                cout << "*";
            }
                h = h - 1;
                cout << endl;
                nspac = nspac + 1;
                nstar = nstar - 1;
            }
            
            type = '3'; //270
            break;
        case '3':
            nstar = h;
            nspac = 0;
            while(h > 0){
            for (int i = 0; i < nstar; i++){
                cout << "*";
            }
            for (int i = 0; i < nspac; i++){
                cout << " ";
            }
                h = h - 1;
                cout << endl;
                nspac = nspac + 1;
                nstar = nstar - 1;
            }
            type = 'n'; //0
            break;
            }
    }
void delay(){
    this_thread::sleep_for(chrono::milliseconds(500));
    clear();
}

int main() {
    char type = 'n';
    for(int i = 0; i < 19; i++) {
        tri(type);
        delay();
        if (type == 'n') type = '1';
        else if (type == '1') type = '2';
        else if (type == '2') type = '3';
        else type = 'n';
    }
    return 0;
}