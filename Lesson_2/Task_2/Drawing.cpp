#include <iostream>

using namespace std;

int main()
{
    int num[5];
    cout << "Enter a unsigned integer" << endl;
    int max = 0;

    for(int i = 0; i < 5; i++){

        cout << "Enter " << i + 1 << " value - ";
        cin >> num[i];
        if (max < num[i]){
            max = num[i];
        }

    }

    for(int i = 0; i < max; i++){
        for(int j = 0; j < 5; j++){
            if(num[j] - i > 0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
    cout << endl;
    }

    return 0;
}
