#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a line <in English>: ";

    string line;
    getline(cin, line);

    for (int symbol = 32; symbol < 127; symbol++) {
        int amn_of_syms = 0;
        for (int sym_num = 0; sym_num < line.length(); sym_num++) if (static_cast<char>(symbol) == line[sym_num]) amn_of_syms++;
        if (amn_of_syms > 0) cout << static_cast<char>(symbol) << " : " << amn_of_syms << endl;
    }
    return 0;
}
