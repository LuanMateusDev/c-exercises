#include <iostream>

using namespace std;

int main(){

    int c, vetor1[10], vetor2[10], results;

    for(c = 0; c < 10; c++){
        cout << "-------------------------------------------\n";
        cout << "Digite o " << c + 1 << " valor do vetor 1: ";
        cin >> vetor1[c];
        cout << "Digite o " << c + 1 << " valor do vetor 2: ";
        cin >> vetor2[c];
    }
    
    cout << "-------------------------------------\n";
    cout << "      <-- General Results -->\n";
    cout << "-------------------------------------\n";
    for(c = 0; c < 10; c++){
        results = vetor1[c] * vetor2[c];  
        cout << " => " << vetor1[c] << " x " << vetor2[c] << " = " << results << "\n";
    }

    return 0;
}


/*
7. Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/