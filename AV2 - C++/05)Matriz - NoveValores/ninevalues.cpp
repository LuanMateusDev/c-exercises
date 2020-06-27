#include <iostream>

using namespace std;

int main(){

    int matriz[1][9];

    for(int i = 0; i < 9; i++) {
        matriz[0][i] = rand() % 100;
    }
    for(int i = 0; i < 9; i++) {
        cout << i << "-> "<< matriz[0][i] << "\n";
    }

    return 0;
}