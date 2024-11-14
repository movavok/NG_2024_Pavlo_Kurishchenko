#include <iostream>
#include <windows.h>
using namespace std;

void cleaner(int deltime){
    Sleep(deltime);
    system("cls");
}

void type0() {
    cout << "*   " << endl;
    cout << "**  " << endl;
    cout << "*** " << endl;
    cout << "****" << endl;
}

void type1() {
    cout << "   *" << endl;
    cout << "  **" << endl;
    cout << " ***" << endl;
    cout << "****" << endl;
}

void type2() {
    cout << "****" << endl;
    cout << " ***" << endl;
    cout << "  **" << endl;
    cout << "   *" << endl;
}

void type3() {
    cout << "****" << endl;
    cout << "*** " << endl;
    cout << "**  " << endl;
    cout << "*   " << endl;
}

int main() {

    int deltime = 150;
    char type = '0';
    int iter = 0;

    while(iter < 10){
        type0();
        cleaner(deltime);
        type1();
        cleaner(deltime);
        type2();
        cleaner(deltime);
        type3();
        cleaner(deltime);
        iter++;
    }
    return 0;
}
