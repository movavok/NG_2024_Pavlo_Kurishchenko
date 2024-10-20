#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a line <in English>: ";

    string line;
    getline(cin, line);

    cout << "All ASCII characters:" << endl;

    for (int i = 32; i < 127; i++) {
        int narr = 0;
        for (int j = 0; j < line.length(); j++){
            if (static_cast<char>(i) == line[j]){
                narr++;
            }
        }
        if (narr > 0){
            cout << static_cast<char>(i) << " : " << narr << endl;
        }
    }
    return 0;
}
