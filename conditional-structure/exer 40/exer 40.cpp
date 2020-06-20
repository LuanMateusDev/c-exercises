#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv){

    char nome[50]; char nome2[50];
    int retorno;

    cout << "Digite um nome: ";
    cin.getline(nome, 50);
    cout << "Você digitou " << nome << " e possui " << strlen(nome) << " caracteres" << endl;
    cout << "Digite outro nome: ";
    cin.getline(nome2, 50);

    retorno = strcmp(nome, nome2);

    if(retorno < 0){
        cout <<  "1:" << nome << ", 2:" << nome2;
    } else if (retorno == 0){
        cout << "As strings são iguais.";
    } else if (retorno > 0) {
        cout << "1: " << nome2 << ", 2: " << nome;
    }

    cout << endl;

    return 0;
}

/*
40) Criar um algoritmo que entre com dois nomes e imprimi-los em ordem alfabética.
*/