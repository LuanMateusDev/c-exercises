#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome1,nome2,nome3;
    int votos1,votos2,votos3,maior,menor;

    cout << "Digite o nome do primeiro candidato: ";
    getline(cin, nome1);
    cout << "Digite a quantidade de votos de " << nome1 << ": ";
    cin >> votos1;
    cin.ignore();
    cout << "Digite o nome do segundo candidato: ";
    getline(cin,nome2);
    cout << "Digite a quantidade de votos de " << nome2 << ": ";
    cin >> votos2;
    cin.ignore();
    cout << "Digite o nome do terceiro candidato: ";
    getline(cin, nome3);
    cout << "Digite a quantidade de votos de " << nome3 << ": ";
    cin >> votos3;
    

    if(votos1 > votos2 && votos1 > votos3){
        cout << "O vencedor será " << nome1 << " com " << votos1 << " votos.";
    } else if (votos2 > votos1 && votos2 > votos3){
        cout << "O vencedor será " << nome2 << " com " << votos2 << " votos.";
    } else if (votos3 > votos1 && votos3 > votos2){
        cout << "O vencedor será " << nome3 << " com " << votos3 << " votos";
    } else {
        cout << "Houve empate, deverá ser feito Segundo Turno.";
    }

    cout << endl;

    return 0;
}

/*
24) Refaça o algoritmo anterior para três candidatos.
*/