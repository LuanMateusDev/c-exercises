#include <iostream>

using namespace std;

void pegaValores(int vetor1[], int vetor2[], int vetor3[]){

    for(int c = 0; c < 5; c++){
        vetor1[c] = 1 + rand() % 100;
        vetor2[c] = 1 + rand() % 100;
        vetor3[c] = vetor1[c] + vetor2[c];
    }
}

void mostraValores(int vetor1[], int vetor2[], int vetor3[]){

    for(int c = 0; c < 5; c++){
        cout << vetor1[c] << " + " << vetor2[c] << " = " << vetor3[c] << "\n";
    }
}

int main(){

    int vetor1[5], vetor2[5], vetor3[5];

    pegaValores(vetor1, vetor2, vetor3);

    mostraValores(vetor1, vetor2, vetor3);

    return 0;
}

/*
14) Ler da tela e montar duas matrizes de 5 elementos e montar uma terceira matriz
a partir destas duas que sejam a junção das duas em qualquer ordem.
*/