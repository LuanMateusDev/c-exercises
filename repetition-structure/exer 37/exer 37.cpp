#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string sexo, corolhos, corcabelo;
    int idade, maior = 0, menor = 120, hab = 1;
    double porcentagem, totM;

    cout << "Quantos habitantes serão analisados: ";
    cin >> hab;

    for(int c = 1; c <= hab; c++){
        cout << "---------------------------------\n";
        cout << "      TABELA DE INFORMAÇÕES       \n";
        cout << "----------------------------------\n";
        cout << "Digite o seu sexo: ";
        cin >> sexo;
        cout << "Informe a cor dos olhos-[azuis, verdes, castanhos]: ";
        cin >> corolhos;
        cout << "Informe a cor dos cabelos-[louros, castanhos, pretos]: ";
        cin >> corcabelo;
        cout << "Informe quantos anos você tem: ";
        cin >> idade;
        if( idade > maior){
            maior = idade;
        }
        if (sexo == "F" && idade >= 18 && idade <= 35 && corcabelo == "louros" && corolhos == "verdes"){
                totM += 1; 
                porcentagem = (totM / hab) * 100;
        }
    }
    cout << "-----------------------------\n";
    cout << "          RESULTADO          \n";
    cout << "-----------------------------\n";
    cout << "O habitante mais velho tem " << maior << " anos" << endl;
    cout << "Porcentagem total de mulheres entre 18 e 35 com olhos verdes e cabelos louros: " << porcentagem << "%";
    cout << "\n_\n";

    return 0;
}

/*
37) Uma pesquisa sobre algumas características físicas da população de uma determinada região
coletou os seguintes dados, referentes a cada habitante, para serem analisados:
 Sexo (masculino, feminino);
 Cor dos olhos (azuis, verdes, castanhos);
 Cor dos cabelos (louros, castanhos, pretos);
 Idade em anos.
Fazer um algoritmo que determine e escreva:
a) A maior idade dos habitantes;
b) A porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
inclusive e que tenham olhos verdes e cabelos louros.
*/