#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string nome, resp = "S", idN,idV;
    int nascimento, Mnovo = 0,Mvelho = 10000;

    while(resp == "S"){

        cout << "Digite um nome: ";
        cin >> nome;
        cout << "Digite o ano de nascimento: ";
        cin >> nascimento;

        if(nascimento > Mnovo){
            Mnovo = nascimento;
            idN = nome;

        }
        if(nascimento < Mvelho){
            Mvelho = nascimento;
            idV = nome;
        }

        cout << "Deseja continuar [S/N]: ";
        cin >> resp;
    }
    cout << "\n_\n";
    cout << "----------------------------------\n";
    cout << "  TABELA - MAIS NOVO E MAIS VELHO   \n";
    cout << "----------------------------------\n";
    cout << "\nO mais velho é " << idV << " nascido em " << Mvelho << " ";
    cout << "\nO mais novo é " << idN << " nascido em " << Mnovo << " ";
    cout << "\n_\n";

    return 0;
}

/*
27) Faça um algoritmo que receba nome e ano de nascimento. No final diga o nome da pessoa mais
velha e da mais nova. O algoritmo deve pedir nome de pessoas até que o usuário diga que não
tem mais nomes a informar, e então, verificar a mais velha e a mais nova.
*/