#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Rows : ";
    cin >> rows;

    for(int row = 0; row < rows; row++){
        int val = 1;
        for(int space = 1; space <= rows-row; space++){
            cout << "  ";
        }

        for(int col = 0; col <= row; col++){
            if(col==0 || row==0){
                val = 1;
            }
            else{
                val = val * (row-col+1)/col;
            }
            cout << val << "   ";
        }
        cout << endl;
    }

    return 0;
}