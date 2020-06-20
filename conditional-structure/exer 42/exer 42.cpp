#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome;
    int G1, G2;
    float media;

    cout << "Digite o seu nome: ";
    getline(cin , nome);
    cout << "Digite a sua G1: ";
    cin >> G1;
    cout << "Digite a sua G2: ";
    cin >> G2;

    media = (G1 + G2) / 2;

    cout << "======================\n";
    cout << "        STATUS        \n";
    cout << "======================\n";
    cout << "\nNome: " << nome;
    cout << "\nG1: " << G1;
    cout << "\nG2: " << G2;
    cout << "\nMédia: " << media;
    if(media >= 7){
        cout << "\nAprovado!";
    } else if (media < 3){
        cout << "\nReprovado!";
    } else {
        cout << "\nExame Final requisitado!";
    }
    cout << endl;


    return 0;
}

/*
42) Entrar com nome, nota do G1 e nota do G2 de um aluno. Imprimir nome, nota do
G1, nota do G2, média e uma das mensagens: “aprovado, reprovado ou em prova
final” (a média é 7 para aprovação, menor que 3 para reprovação e as demais em
prova final).
*/