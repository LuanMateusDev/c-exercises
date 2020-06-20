#include <iostream>

using namespace std;

void pegaInformacao(int n[][2], string nome[], int media[]){

    for(int c = 0; c < 15; c++){
        cout << "Informe o nome do " << c << " aluno: ";
        cin >> nome[c];
        cout << "Informe o PR1 de " << nome[c] << " :";
        cin >> n[c][1];
        cout << "Informe a nota da PR2: ";
        cin >> n[c][2];
        media[c] = (n[c][1] + n[c][2]) / 2;
        cout << "-------------------------------\n";
    }
}

void mostraInformacao(int n[][2], string nome[], int M[]){

    cout << "Aluno\tNOTA1\tNOTA2\tMEDIA\t\tSITUAÇÃO\n";
    cout << "----------------------------------------\n";
    for(int c = 0; c < 15; c++){
        cout << nome[c];
        cout << "\tPR1:" << n[c][1];
        cout << "\tPR2:" << n[c][2]; 
        cout << "\tMédia:" << M[c];
        if(M[c] > 6)
            cout << "    \tStatus AP\n";
        else
            cout << "     \tStatus RP\n";
        cout << "--------------------------------------\n";
    }
}

int main(){

    int notas[15][2], media[15];
    string nomes[15];

    pegaInformacao(notas, nomes, media);

    mostraInformacao(notas, nomes, media);

    return 0;
}

/*
5) Armazenar nomes e notas PR1 e PR2 de 15 alunos. Calcular e armazenar a média
arredondada. Armazenar também a situação do aluno: AP e RP. Imprimir uma
listagem contendo nome, notas, média e situação de cada aluno, tabulando.
*/