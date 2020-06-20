#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    double metade;
    int num;

    for (int i = 1; i <= 10; i++){

        cout << "Digite o " << i << "º número: ";
        cin >> num;

        metade = num / 2;
        cout << "\nA metade de " << num  << " será: " << metade << " ";
        cout << "\n_\n";
    }
    
    return 0;
}

/*

11) Entrar com 10 números e imprimir a metade de cada número.
*/