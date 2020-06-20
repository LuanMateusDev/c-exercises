#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    int b,n;
    string final;

    while(final != "N"){

        cout << "Coloque o valor de b: ";
        cin >> b;
        cout << "Coloque o valor de n: ";
        cin >> n;

        if ((n > 1) && (b >= 2)){
            cout << pow(b,n);
        } 
        cout << "\nDeseja continuar: [S/N]";
        cin >> final;
    }

    system("pause");
    return 0;
}


/*
22) Criar um algoritmo que calcule e imprima o valor de b n . O valor de n deverá ser maior que 1 e
inteiro e o valor de b maior ou igual a 2 e inteiro.
*/