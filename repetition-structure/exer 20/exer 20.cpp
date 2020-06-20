#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome;
    int nota;
    float media, soma_nota;

    cout << "Informe o seu nome: ";
    cin >> nome;

    while(nome != "FIM"){

        soma_nota = 0;
        for(int i = 1; i <= 4; i++){

        cout << "Digite a sua " << i << " Nota: ";
        cin >> nota;
        soma_nota = soma_nota + nota;

        }

        media = soma_nota / 4;
        cout << "\nA media eh: " << media;

        cout << "\nInforme o seu nome: ";
        cin >> nome;
    }

    return 0;
}


//20) Faça um algoritmo que receba as 4 notas de alunos e informe sua média até que o nome informado
//seja "FIM".
