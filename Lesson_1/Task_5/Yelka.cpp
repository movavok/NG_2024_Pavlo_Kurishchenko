#include <iostream>
using namespace std;
int main() {

    int hgt;
    cout << "Enter the height of the Christmas tree (integer > 2) - ";
    cin >> hgt;

    if (hgt <= 2){
        cout << "Enter a positive integer > 2";
        return 1;
    }

    int nstar = 1, nspace = hgt--;

    for (int i = 0; i < hgt; i++){
        cout << string(nspace, ' ') << string(nstar, '*') << endl;
        nspace--;
        nstar += 2;
    }

    cout << string((nstar - 2) / 2, ' ') << "*" << endl;
    return 0;
}
