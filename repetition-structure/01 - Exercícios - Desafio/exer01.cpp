#include <iostream>
#include <string.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    string estado;
    int c, codigo, veiculos, acidentes, maior = 0, menor = 0, totveiculos = 0, totC = 0, totAC = 0, MediaV = 0,  MediaF = 0,  idMaior, idMenor;

    cout << "=============================\n";
    cout << " <-- Tabela de informações -->\n";
    for(c = 1; c <= 200; c++){

        cout << "============================\n";
        cout << "Informe o código da cidade: ";
        cin >> codigo;
        cout << "Informe o Estado: ";
        cin >> estado;
        cout << "Informe a quantidade de veiculos de passeio em 1992: ";
        cin >> veiculos;
        cout << "Informe a quantidade de acidentes de trânsito com vítimas em 1992: ";
        cin >> acidentes;

        totveiculos += veiculos;

        if(c == 1){
            maior = acidentes;
            menor = acidentes;
            idMaior = codigo;
            idMenor = codigo;
        }

        if(acidentes > maior){
            maior = acidentes;
            idMaior = codigo;
        }
        if (acidentes < menor){
            menor = acidentes;
            idMenor = codigo;
        }

        if(estado == "ce" || estado == "CE"){
            totC += 1;
            totAC += acidentes;
        }

    }

    MediaV = totveiculos / 200;
    if(totC > 0){
        MediaF = totAC / totC;
    } else {
        MediaF = 0;
    }

    cout << "==========================\n";
    cout << " <-- Resultados Gerais -->\n";
    cout << "==========================\n";
    cout << "Maior índice de acidentes de trânsito foi na cidade " << idMaior << " com " << maior << " acidentes.";
    cout << "\nMenor índice de acidentes de trânsito foi na cidade " << idMenor << " com " << menor << " acidentes.";
    cout << "\nMédia de veículos nas cidades brasileiras: " <<  MediaV;
    cout << "\nMédia de acidentes com vítimas entre as cidades do Ceará: " << MediaF;
    cout << "\n";

    return 0;

}






















/*
4.Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

- código da cidade
- estado (RN, CE, PI, PE, MA, ...)
- número de veículos de passeio (em 1992)
- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
b) qual a média de veículos nas cidades brasileiras
c) qual a média de acidentes com vítimas entre as cidades do Ceará.
*/