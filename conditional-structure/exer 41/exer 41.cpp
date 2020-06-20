#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num;

    cout << "Digite um valor: ";
    cin >> num;

    if ((num == 5 || num == 200 || num == 400)){
        cout << "\nO número é igual a " << num;
    } else {
        cout << "Fora do primeiro escopo.";
    }
    if (num >= 500 && num <=1000){
        cout << "\nEle está entre 500 e 1000.";
    } else {
        cout << "\nFora do segundo escopo.";
    }
       

    cout << endl;


    return 0;
}

/*
41) Ler um número e imprimir se ele é igual a 5, a 200, a 400, se está no intervalo entre
500 e 1000, inclusive, ou se ele está fora dos escopos anteriores.
*/