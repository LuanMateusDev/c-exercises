#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int nascimento, Atual;

    cout << "Informe o seu ano de nascimento: ";
    cin >> nascimento;

    Atual =  2020 - nascimento;

    cout << "Sua idade será: " << Atual << " anos.";

    if (Atual >= 16){
        cout << "\nVocê tem idade para votar.";
    }
    if (Atual >= 18){
        cout << "\nVocê tem idade para tirar habilitação.";
    }

    cout << endl;

    return 0;
}

/*
34) Faça um algoritmo que leia o ano de nascimento de uma pessoa, calcule e mostre
sua idade e, também, verifique e mostre se ela já tem idade para votar (16 anos ou
mais) e para conseguir a carteira de habilitação (18 anos ou mais).
*/