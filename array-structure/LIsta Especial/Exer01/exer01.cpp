#include <iostream>

using namespace std;

void pegaValores(int vetor[]){

    for(int c = 0; c < 15; c++){
        vetor[c] = rand() % 100;
    }
}

void mostraValores(int vetor[]){
    
    for(int c = 0; c < 15; c++){
        cout << "Elemento [" << c + 1 << "] : " << vetor[c] << "\n";
    }
}

int main(){

    int elementos[15];

    pegaValores(elementos);
    cout << "----------------------------\n";
    cout << "<-- Mostrando Elementos -->\n";
    cout << "----------------------------\n";
    mostraValores(elementos);

    return 0;
}

/*
1) Ler da tela e montar uma matriz de 15 elementos numéricos inteiros.
*/
