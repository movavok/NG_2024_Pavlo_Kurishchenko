#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a line <in English>: " << endl;

    string line;
    getline(cin, line);
    bool word = false;
    int count = 0;

    for (int i = 0; i < line.length(); i++){

        if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')){

            if (!word){

                count++;
                word = true;

            }
        }
        else{

            word = false;

        }
    }

    cout << "Count of the words: " << count << endl;

    return 0;
}
