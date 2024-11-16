#include <iostream>
using namespace std;

void drawing(int nstar, int nspace, int hgt) {
    if (hgt > 0) cout << string(nspace, ' ') << string(nstar, '*') << endl;
    else{
        cout << string((nstar - 2) / 2, ' ') << "*" << endl;
        return;
    }
    drawing(nstar + 2, nspace - 1, hgt - 1);
}

int main() {
    int hgt;
    cout << "Enter the height of the Christmas tree (integer > 2) - ";
    cin >> hgt;

    if (hgt <= 2){
        cout << "Enter a positive integer > 2";
        return 1;
    }

    drawing(1, hgt - 1, hgt);
    return 0;
}
