#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int idade;

    cout << "Informe a sua idade: ";
    cin >> idade;

    if(idade >= 18 && idade <= 65){
        cout << "Maior de idade!";
    } else if (idade < 18){
        cout << "Menor de idade!";
    } else if (idade > 65) {
        cout << "Tem mais de 65 anos.";
    }

    cout << endl;


    return 0;
}

/*
32) Entrar com a idade de uma pessoa e informar: se é maior de idade; se é menor de
idade ou se é maior de 65 anos.
*/