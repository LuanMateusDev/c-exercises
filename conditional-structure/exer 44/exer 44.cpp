#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float valor, lucro;

    cout << "Qual é o valor do produto: ";
    cin >> valor; 

    if (valor < 20){

        lucro = (valor * 0.45) + valor;
        cout << "O valor do produto + o lucro será: " << lucro;
    } else {

        lucro = (valor * 0.30) + valor;
        cout << "O valor do produto + o lucro será: " << lucro;
    }

  return 0;
}

/*
44) Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o
valor da compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar
com o valor do produto e imprimir o valor da venda.
*/