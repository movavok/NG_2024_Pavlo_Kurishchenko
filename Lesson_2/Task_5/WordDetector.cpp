#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a line <in English>: " << endl;

    string line;
    getline(cin, line);
    bool word = false;
    int count = 0;

    for (int sym_num = 0; sym_num < line.length(); sym_num++){
        if ((line[sym_num] >= 'A' && line[sym_num] <= 'Z') || (line[sym_num] >= 'a' && line[sym_num] <= 'z')){
            if (!word){
                count++;
                word = true;
            }
        }
        else word = false;
    }

    cout << "Count of the words: " << count << endl;

    return 0;
}
