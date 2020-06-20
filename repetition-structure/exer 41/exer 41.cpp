#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    string sexo;
    float altura, MaiorAl, MenorAl,SomaMedia, totH, totF, media;

    MaiorAl = 0;
    MenorAl = 3;
    totF = 0;
    totH = 0;

    for (int i = 1; i <= 4; i++){

        cout << "Digite a " << i << " altura: ";
        cin >> altura;
        cout << "Digite o sexo: [M/F]";
        cin >> sexo;

        if (altura < MenorAl){
            MenorAl = altura;
        }
        if (altura > MaiorAl){
            MaiorAl = altura;
        }
        if((sexo == "F") || (sexo == "f")){
            totF++;
            SomaMedia += altura;
        }else {
            totH++;
        }
    }   
        media = SomaMedia / totF;
        cout << "\nA maior altura do grupo será de: " << MaiorAl;
        cout << "\nA menor altura do grupo será de: " << MenorAl;
        cout << "\nA media das alturas das mulheres será de: " << media;
        cout << "\nO total de homens será de: " << totH;
    return 0;
}

/*
41) Tem-se um conjunto de dados, contendo a altura e o sexo (masculino e feminino) de 50 pessoas.
Fazer um algoritmo que calcule e escreva:
a) A maior e a menor altura do grupo;
b) A média de altura das mulheres;
c) O número de homens.
*/




