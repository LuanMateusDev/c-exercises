#include <iostream>

using namespace std;

void pegaValores(int vetor1[], int vetor2[], int vetor3[]){

    for(int c = 0; c < 10; c++){
        vetor1[c] = rand() % 1000;
        vetor2[c] = rand() % 1000;
        vetor3[c] = vetor1[c] - vetor2[c];
    }
}

void mostraValores(int vetor1[], int vetor2[], int vetor3[]){

    for(int c = 0; c < 10; c++){
        cout << vetor1[c] << " - " << vetor2[c] << " = " << vetor3[c] << "\n";
    }
}

int main(){

    int vetor1[10], vetor2[10], vetor3[10];

    pegaValores(vetor1, vetor2, vetor3);

    mostraValores(vetor1, vetor2, vetor3);

    return 0;
}

/*
13) Ler da tela e montar duas matrizes de elementos numéricos inteiros e construir
uma terceira matriz com seus elementos formados a partir da subtração dos
elementos da primeira menos o da segunda.
*/