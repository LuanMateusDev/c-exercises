#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string tipo;
    int km;
    float consumo;

    cout << "Informe a quantidade de quilômetros que o percuso possui: ";
    cin >> km;
    cout << "Informe o tipo de carro.[A,B ou C]: ";
    cin >> tipo;

    if(tipo == "A" || tipo == "a"){
        consumo = km / 8;
        cout << "Consumo estimado para " << km << " será de: " << consumo << "L";
    } else if (tipo == "B" || tipo == "b"){
        consumo = km / 9;
        cout << "Consumo estimado para " << km << " será de: " << consumo << "L";
    } else if(tipo == "C" || tipo == "c") {
        consumo = km / 12;
        cout << "Consumo estimado para " << km << " será de: " << consumo << "L";
    } else {
        cout << "Tipo de carro inválido!";

    }
        
    cout << endl;


    return 0;
}

/*
49) Fazer um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe o
consumo estimado de combustível, sabendo-se que um carro tipo C faz 12km com
um litro de gasolina, um tipo B faz 9km e o tipo A, 8km por litro.
*/