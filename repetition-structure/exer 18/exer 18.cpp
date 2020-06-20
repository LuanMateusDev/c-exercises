#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

    int num;
    string nome,nomefilho;

    cout << "Digite o seu nome: ";
    getline(cin,nome);
    cout << "Digite quantos filhos você tem: ";
    cin >> num;
    cin.ignore();

    for(int i = 1 ; i <= num ; i++){

        cout << "\nDigite o nome do " << i << "º filho: ";
        getline(cin,nomefilho);
        cout << "O nome do " << i << " filho é: " << nomefilho; 
    }

    cout << "\n_\n";
    return 0;
}

/*
18) Faça um algoritmo que após receber o número de filhos de uma pessoa leia o nome de cada filho.
*/