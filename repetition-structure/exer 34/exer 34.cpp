#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int i, numero, menor = 10000, valores = 0;
    string resposta;

    cout << "Quantos números o conjunto possui? ";
    cin >> numero;

    cout << "Digite um número: ";
    cin >> numero;
    menor = numero;

    while(resposta != "-1"){

        for(i = 1; i <= numero; i++){

            cout << "Digite o " << i << " valor: ";
            cin >> valores;

                if (valores < menor){
                    menor = valores;
                }
        }
                cout << "Mais algum valor para digitar? Se sim [S]. Caso não tenha, digite: -1: ";
                cin >> resposta;
    }
        cout << "O menor valor do conjunto é o: " << menor << endl;

    return 0;
}

    



/*
34) Dado um conjunto de valores inteiros e positivos, determine qual o menor valor do conjunto. Com
o valor -1 (flag) indique o final dos dados e não deve ser considerado.
*/