#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome, sexo;
    int idade;

    cout << "Informe o seu nome: ";
    getline(cin , nome);
    cout << "Informe o seu sexo: ";
    cin >> sexo;
    cin.ignore();
    cout << "Informe a sua idade: ";
    cin >> idade;

    if((sexo == "F" || sexo == "f") && idade < 25){
        cout << nome << " aceita.";

    } else {
        cout << nome << " não aceita.";
    }

    cout << endl;

    return 0;
}

/*
31) Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo feminino e
tiver menos que 25 anos, imprimir nome e a mensagem: “aceita”. Caso contrário,
imprimir nome e a mensagem: “não aceita”.
*/