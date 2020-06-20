#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string estado;

    cout << "Digite a sigla do seu estado: ";
    cin >> estado;

    if ((estado == "RJ" || estado == "rj")){
        cout << "Carioca.";
    } else if ((estado == "SP" || estado == "sp")){
        cout << "Paulista.";
    } else if ((estado == "MG" || estado == "mg")){
        cout << "Mineiro.";
    } else {
        cout << "Outros estados.";
    }

    cout << endl;

    return 0;
}

/*
33) Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens: carioca,
paulista, mineiro ou outros estados.
*/
