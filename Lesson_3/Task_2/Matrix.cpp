#include <iostream>
#include <windows.h>
using namespace std;

struct Matrix{
    double elem[3][3];
};

void miniCalculator();

int main(){
    miniCalculator();
    return 0;
}

void calculation(Matrix& first, Matrix& second, char oper){
    for (int row = 0; row < 3; row++){
        for (int colm = 0; colm < 3; colm++){
            if (oper == '+') cout << first.elem[row][colm] + second.elem[row][colm] << "  ";
            else cout << first.elem[row][colm] - second.elem[row][colm] << "  ";
        }
        cout << endl;
    }
}

char askOperation(char& oper){
    cout << "Choose the operation (+/-)\n";
    cin >> oper;
    if (!(oper == '+' || oper == '-')) askOperation(oper);
    system("cls");
    return oper;
}

void underPrint(const Matrix& matx){
    for (int row = 0; row < 3; row++){
        for (int colm = 0; colm < 3; colm++){
            cout << matx.elem[row][colm] << "  ";
        }
        cout << endl;
    }
}

int printMatrixes(const Matrix& first, const Matrix& second, char oper){
    underPrint(first);
    if (oper == '-') cout << " minus \n";
    else cout << " plus \n";
    underPrint(second);
    cout << "calculation\n";
    return 0;
}

void getMatrix(Matrix& matx, const string& name){
    for (int row = 0; row < 3; row++){
        for (int colm = 0; colm < 3; colm++){
            cout << "Enter " << name << " matrix value " << (3 * row + colm) + 1 << ": ";
            cin >> matx.elem[row][colm];
        }
    }
    system("cls");
}

void miniCalculator(){
    Matrix first, second;
    char oper;
    getMatrix(first, "first");
    askOperation(oper);
    getMatrix(second, "second");
    printMatrixes(first, second, oper);
    calculation(first, second, oper);
}
