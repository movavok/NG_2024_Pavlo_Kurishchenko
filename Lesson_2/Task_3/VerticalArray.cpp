#include <iostream>

using namespace std;

int main()
{
    int num[20];
    cout << "Enter a unsigned integer" << endl;
    int max = 0;
    int nsize = 0;

    for(int i = 0; i < 19; i++){

        cout << "Enter " << i + 1 << " value - ";
        cin >> num[i];
        if (max < num[i]){
            max = num[i];
        }
        if (num[i] < 0){
            cout << "I don't like negative numbers.\n" << "Enter a unsigned integer\n";
            i--;
            continue;
        }
        if (num[i] == 0){
            i = 19;
        }
        nsize++;

    }

    for(int i = 0; i < nsize - 1; i++){
        for(int j = 0; j < (max - num[i]) / 2; j++){
            cout << " ";
        }
        for(int j = 0; j < num[i]; j++){
            cout << "*";
        }

        cout << endl;

    }

    return 0;
}
