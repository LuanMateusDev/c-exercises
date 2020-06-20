#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string resp;
    int num , soma = 0;

    do{
        cout << "Digite um número: ";
        cin >> num;

        if(num != 0){
            soma += num;
            cout << "------------------------------\n";
            cout << "           SOMADOR             \n";
            cout << "------------------------------\n";
            cout << soma << " ";
            cout << "\n_\n";
            cout << "\nHá mais números a serem somados: ";
            cin >> resp;
            cout << "\n_\n";
        } else {
            resp = "não";
        }
    }while(resp == "sim");

    return 0;
}

/*
32) Repetir o problema acima com números para informar a soma deles até que: - O número informado
seja zero - A resposta à pergunta "Há mais números a serem somados?" seja não.
*/