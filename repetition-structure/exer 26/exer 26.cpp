#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num, soma = 0;;
    cout << "-----------------------\n";
    cout << "   EXPANDIR E SOMAR    \n";
    cout << "-------------------------\n";
    cout << "Digite um número: ";
    cin >> num;

     for(int c = 1; c <= num; c++){

         cout << c << " ";
         soma += c;
     }

    cout << "= " << soma << " ";
    cout << "\n_\n";

    return 0;
}

/*
26) Criar um algoritmo que leia um número e imprima todos os números de 1 até o número lido e o
seu produto. Exemplo: número 3 – saída: 1 2 3 = 6
*/