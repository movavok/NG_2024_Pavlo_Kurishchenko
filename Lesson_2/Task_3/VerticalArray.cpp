#include <iostream>

using namespace std;

int main()
{
    int array[20];
    cout << "Enter a unsigned integer" << endl;
    int max_int = 0;
    int num_of_nums = 0;

    for(int num = 1; num <= 20; num++){
        cout << "Enter " << num << " value - ";
        cin >> array[num - 1];
        if (max_int < array[num - 1]) max_int = array[num - 1];
        if (array[num - 1] < 0){
            cout << "I don't like negative numbers.\n" << "Enter a unsigned integer\n";
            num--;
            continue;
        }
        if (array[num - 1] == 0){
            break;
        }
        num_of_nums++;
    }

    for(int row = 0; row < num_of_nums; row++){
        cout << string ((max_int - array[row]) / 2, ' ') << string (array[row], '*') << endl;
    }
    return 0;
}
