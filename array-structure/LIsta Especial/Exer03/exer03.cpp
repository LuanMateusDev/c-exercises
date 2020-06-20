#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int matA[8], matB[8];

    for(int c = 0; c < 8; c++){

        matA[c] = 1 + rand() % 10;
        matB[c] = matA[c] * 3;
    }

    for(int c = 0; c < 8; c++){
        cout << "Matriz[" << c << "]" << matB[c] << "\n" ;
   
    }

}

/*
3) Ler da tela e montar uma matriz de 8 elementos numéricos inteiros e montar uma
segunda matriz também de 8 elementos com os elementos da primeira
multiplicados por 3.*/