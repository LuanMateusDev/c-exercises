#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string aluno,resp = "S";
    int matricula, totalunos = 0;

    while(resp == "S"){

        
        cout << "Digite o nome do aluno: ";
        getline(cin,aluno);
        cout << "Informe o seu número de matrícula: ";
        cin >> matricula;

        totalunos += 1; 

        cout << "Existem mais alunos para cadastrar [S/N]: ";
        cin >> resp;
        cin.ignore();
    }
    cout << "\n_\n";
    cout << "---------------------------------\n";
    cout << "    TOTAL DE ALUNOS MATRÍCULADOS \n";
    cout << "---------------------------------\n";
    cout << "TOTAL : " << totalunos; 

    cout << "\n_\n";
    return 0;
}

/*
28) Faça um algoritmo que faça matrícula de alunos em uma escola. No final do algoritmo, quando o
usuário não tiver mais nomes a informar, o algoritmo deve totalizar o número de alunos
matriculados.
*/