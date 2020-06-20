#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int idade;

    cout << "Digite a sua idade: ";
    cin >> idade;

    if(idade < 16){
        cout << "Não-eleitor.";
    } else if (idade >=18 && idade <= 65){
        cout << "Eleitor obrigatório.";
    } else if ((idade = 16 && idade <=18) || idade > 65){
        cout << "Eleitor facultativo.";
    }

    cout << endl;

    return 0;
}

/*
45) Criar um algoritmo que leia a idade de uma pessoa e informar a sua classe eleitoral:
 Não-eleitor (abaixo de 16 anos)
 Eleitor obrigatório (entre 18 e 65 anos)
 Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos)
*/