#include <iostream>

using namespace std;

int main(){

    int c, vetor[20], totpar = 0;

    for(c = 0; c < 20; c++){
        cout << "-----------------------\n";
        cout << "Informe o valor do " << c + 1 << " vetor: ";
        cin >> vetor[c];

        if(vetor[c] % 2 == 0)
            totpar += 1;
    }
    cout << "--------------------------\n";
    cout << "<-- General Results -->\n";
    cout << "--------------------------\n";
    cout << "Quantidade total de valores pares: " << totpar;
    cout << "\n\n";

    return 0;
}

/*
8. Escreva um algoritmo que leia e mostre um vetor de 20 números. A seguir, conte quantos valores pares existem no
vetor.
*/