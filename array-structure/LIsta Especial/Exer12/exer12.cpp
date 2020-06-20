#include <iostream>

using namespace std;

void pegaValores(int vetor[]){
    //Pegando Valores;
    for(int c = 0; c < 100; c++){
        vetor[c] = rand() % 1000;
    }
}


int main(void){

    int vetor[100], maior, menor, totpar, somatotal;
    double porcem_pares, media;

    pegaValores(vetor);

    //Maior e Menor;
    maior = vetor[0];
    menor = vetor[0];
    for(int c = 0; c < 100; c++){

        if(vetor[c] > maior)
            maior = vetor[c];
        else if(vetor[c] < menor)
            menor = vetor[c];
        //Pegando Pares;
        if(vetor[c] % 2 == 0)
            totpar += 1;
        somatotal += vetor[c];
    }

    //Cálculo da Média;
    media = somatotal / 10;
    porcem_pares = (totpar * 100) / 100;

    cout << "-------------------------------\n";
    cout << "  <-- Resultados Gerais -->\n";
    cout << "-------------------------------\n";
    cout << "\nO maior valor dos vetores: " << maior;
    cout << "\nO menor valor dos vetores: " << menor;
    cout << "\nPercentual de números pares: " << porcem_pares << "%";
    cout << "\nMédia Geral dos elementos: " << media;
    cout << "\n_\n";
    
    return 0;
}

/*
12) Criar um programa que leia dados para um vetor de 100 elementos inteiros.
Imprimir o maior e menor, sem ordenar, o percentual de números pares e média
dos elementos do vetor.
*/