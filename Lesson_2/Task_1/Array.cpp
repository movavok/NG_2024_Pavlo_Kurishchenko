#include <iostream>

using namespace std;

int main()
{
    int array[5];

    for(int num = 1; num <= 5; num++){
        cout << "Enter integer " << num << " - ";
        cin >> array[num - 1];
    }

    cout << "That is your array: ";
    for(int num = 1; num <= 5; num++){
        cout << array[num - 1];
        if(num < 5){
            cout << ", ";
        }
    }

    cout << "." << endl;
    return 0;
}
