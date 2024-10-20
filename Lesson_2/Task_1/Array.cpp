#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    double num[5];

    for(int i = 0; i < 5; i++){

        cout << "Enter number number " << i + 1 << " - ";
        cin >> num[i];
        system("cls");

    }

    cout << "That is your array: ";

    for(int i = 0; i < 5; i++){

        cout << num[i];
        if(i < 4){
            cout << ", ";
        }
    }

    cout << "." << endl;
    return 0;
}
