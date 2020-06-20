#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome,endereco,estado,sexo;
    int idade,reser,titulo;

    cout << "Digite o seu nome: ";
    getline(cin, nome);
    cout << "Informe o seu endereço: ";
    cin >> endereco;
    cin.ignore();
    cout << "Informe a sua idade: ";
    cin >> idade;
    cout << "Informe o seu sexo[M/F]: ";
    cin >> sexo;
    cout << "Informe o seu estado civil: ";
    cin >> estado;

    if(sexo == "M" && idade == 17){
        cout << "Digite o número do certificado de reservista: ";
        cin >> reser;
    } else if (sexo == "M" && idade > 17){
        cout << "Digite o número do título de eleitor: ";
        cin >> titulo;
    }

    return 0;
}

/*
25) Faça um algoritmo que solicite na tela o nome de uma pessoa, seu endereço, idade,
sexo e estado civil. Se a pessoa for do sexo masculino (M) e a pessoa for maior de
17 anos então peça também o número do certificado de reservista e se for maior de
17 anos o número do título de eleitor.
*/