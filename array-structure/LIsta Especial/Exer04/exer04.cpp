#include <iostream>

using namespace std;

int main(){

    int NUM[15];
    string msg[15];

    for(int c = 0; c < 14; c++){
        NUM[c] = 1 + rand() % 10;

        if(NUM[c] % 2 == 0)
            msg[c] = "Par";
        else
            msg[c] = "Impar";
    }

    for(int c = 0; c < 14; c++){
        cout << NUM[c] << " é: " << msg[c] << "\n";
    }

    return 0;
}

/*
4) Armazenar 15 números inteiros em um vetor NUM e imprimir uma listagem
numerada contendo o número e uma das mensagens: par ou ímpar.
*/