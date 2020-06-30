#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int mat[10][10], somaTotal = 0;

    for(int l = 0; l < 10; l++){
        for(int c = 0; c < 10; c++){
            mat[l][c] = rand() % 100;
            if(l % 2 == 0 && c % 2 == 0)
                somaTotal += mat[l][c];
        }
    }
    
    cout << "\nSoma total de todos os valores contidos nos índices pares da matriz: " << somaTotal << "\n";

    return 0;
}