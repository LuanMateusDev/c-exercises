#include <iostream>

using namespace std;

int main(){

    int c, p = 0, i = 0, valores, par[4], impar[4];

    for(c = 1; c <= 10; c++){
        cout << "-------------------------------\n";
        cout << "Digite o " << c << " valor: ";
        cin >> valores;

        //Verificador de Impar ou Par;
        if(valores % 2 == 0){
            par[p] = valores;
            p++;
        }
        if (valores % 2 != 0) {
            impar[i] = valores;
            i++;
        }
        //===============

        //Vetor Cheio
        if(p == 5 && c != 30){
            cout << "<-- Vetor Cheio - Pares -->";
            for(p = 0; p < 5; p++){
                cout << "\nO valor no indice " << p + 1 << " : " << par[p];
            }
            p = 0;
            cout << "\n";
        }

        if(i == 5 && c != 30){
            cout << "<-- Vetor Cheio - Impares";
            for(i = 0; i < 5; i++){
                cout << "\nO valor no indice " << i + 1 << " : " << impar[i];
            }
            i = 0;
            cout << "\n";
        }
        //===========

    }
    cout << "==========================\n";
    cout << "   <-- Valores Finais -->\n";
    cout << "===========================\n";
    cout << "\n<-- Vetor dos Pares -->\n";
        for(p = 0; p < 5; p++)
            cout << "\nO indice " << p + 1 << " possui valor: " << par[p];

    cout << "\n<-- Vetor dos Impares -->\n";
        for(i = 0; i < 5; i++)
            cout << "\nO indice " << i + 1 << " possui valor: " << impar[i];





    return 0;
}

/*
1. Elaborar um algoritmo que lê um conjunto de 30 valores e os coloca em 2 vetores conforme estes valores forem pares
ou ímpares. O tamanho do vetor é de 5 posições. Se algum vetor estiver cheio, escrevê-lo. Terminada a leitura escrever
o conteúdo dos dois vetores. Cada vetor pode ser preenchido tantas vezes quantas for necessário.
*/