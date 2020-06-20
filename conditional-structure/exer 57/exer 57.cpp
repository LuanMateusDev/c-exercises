#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main(){

    float valor,convertido;
    string moeda;

    cout << "-------------------------------------------------";
    cout << "\n[F] (Franco Suiço)";
    cout << "\n[L] (Libra Esterlina)";
    cout << "\n[D] (Dólar)";
    cout << "\n[M] (Marco Alemão)";
    cout << "\nDigite para qual moeda você quer converter: ";
    cin >> moeda;
    cout << "--------------------------------------------------";
    cout << "\nDigite o valor para conversão: ";
    cin >> valor;
   
    if ((moeda == "F") || (moeda == "f")){
        
        convertido = valor / 5.43;
        cout << "O valor " << valor << " em franco suíço será: " << convertido;

    } else if ((moeda == "L") || (moeda == "l")) {

        convertido = valor / 6.57;
        cout << "O valor" << valor << " em libra: " << convertido;

    } else if ((moeda == "D") || (moeda == "d")){

        convertido = valor / 5.25;
        cout << "O valor" << valor << " em dolar será: " << convertido;

    } else if ((moeda == "M") || (moeda == "m")) {

        convertido = valor / 0.34;
        cout << "O valor" << valor << " em marco alemão será: " << convertido;        
    }
  
    return 0;
}

/*
57) Fazer um algoritmo que possa converter uma determinada quantia dada em reais
para uma das seguintes moedas:
 F – franco suíço
 L – libra esterlina
 D – dólar
 M – marco alemão
*/