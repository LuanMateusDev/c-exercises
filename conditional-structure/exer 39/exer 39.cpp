#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome, estadoc;

    cout << "Informe o seu nome: ";
    getline(cin, nome);
    cout << "Informe o estado civil. [C,S,D,V]: ";
    cin >> estadoc;

    cout << "======================\n";
    cout << "       STATUS         \n";
    cout << "======================\n";
    if((estadoc == "c" || estadoc == "C")){
        cout << "Casado.";
    } else if((estadoc == "s" || estadoc == "S")){
        cout << "Solteiro.";
    } else if ((estadoc == "d" || estadoc == "D")){
        cout << "Divorciado.";
    } else if ((estadoc == "v" || estadoc == "V")){
        cout << "Viúvo";
    } else {
        cout << "opção inválida.";
    }

    cout << endl;

    return 0;
}

/*
39) Escreva um algoritmo, utilizando as três estruturas aqui apresentadas, que permita
ao usuário ler nome e estado civil de uma certa pessoa. Ao final do processamento,
se a pessoa escolher a letra “c”, deverá ser impresso “casado”; se a pessoa escolher
a letra “s”, deverá ser impresso “solteiro”; se a pessoa escolher a letra “d”, deverá
ser impresso “divorciado”; se a pessoa escolher a letra “v”, deverá ser impresso
“viúvo”; se a pessoa escolher qualquer letra diferente das anteriormente citadas,
deverá ser impresso “opção inválida”.
*/