#include <iostream>
#include <cstring>

using namespace std;

int main(){

    int idade[20];
    string nomesArmazenados[2], nomes[2];

    for(int c = 0; c < 2; c++){

        cout << "\nInforme o " << c + 1 << " nome: ";
        getline(cin, nomes[c]);
        cout << "\nInforme a idade: ";
        cin >> idade[c];
        cin.ignore(); 
 
        if(nomes[c][0] == 'L')
        nomesArmazenados[c]= nomes[c];
        else if (nomes[c][0] == 'M')
        nomesArmazenados[c]= nomes[c];
        else if (nomes[c][0] == 'N')
        nomesArmazenados[c]= nomes[c];
        else if (nomes[c][0] == 'O')
        nomesArmazenados[c] = nomes[c];
        else if (nomes[c][0] == 'P')
        nomesArmazenados[c]= nomes[c];
        else if (nomes[c][0] == 'Q')
        nomesArmazenados[c]= nomes[c];
        else if (nomes[c][0] == 'R')
        nomesArmazenados[c]= nomes[c];
        else if (nomes[c][0] == 'S')
        nomesArmazenados[c]= nomes[c];
    }

    for(int c = 0; c < 2; c++){
        cout << "Nome " << c << " :" << nomesArmazenados[c] << "\n";
    }

    return 0;
}

/*
8) Criar o programa que deixe entrar com nome e idade de 20 pessoas e armazene
em um vetor todos os nomes que comecem pela letra do intervalo L – S.
*/