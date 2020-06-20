#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int Soma = 0;

    cout << "=================\n";
    cout << "     SOMADOR \n";
    cout << "=================\n";
    for(int i = 1 ; i <= 100 ; i++){

        cout << i << " ";
        Soma += i;
    }
        cout <<"\n\nA soma entre todos os valores será: " << Soma;
    cout << "\n_\n";
    return 0;
}

/*
10) Criar um algoritmo que imprima todos os números de 1 até 100 e a soma deles.
*/