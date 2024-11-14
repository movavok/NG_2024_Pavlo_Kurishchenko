#include <iostream>

using namespace std;

int main()
{
    int array[5];
    cout << "Enter 5 natural numbers" << endl;
    int max_num_rows = 0;

    for(int num = 1; num <= 5; num++){
        cout << "Enter " << num << " value - ";
        cin >> array[num - 1];
        if (max_num_rows < array[num - 1]) max_num_rows = array[num - 1];
    }

    for(int row = 0; row < max_num_rows; row++){
        for(int colm = 0; colm < 5; colm++){
            if(array[colm] - row > 0) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
