#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){

    float x, f;
    
    cout << "Digite o valor de X: ";
    cin >> x;

    f = 8 / (2 - x);

    cout << "Valor de f(" << x << ") será: " << f;

    cout << endl;


    return 0;
}

/*
61) Criar um algoritmo que entre com o valor de x, calcule e imprima o valor de f(x).
f(x) =
8
2−x
*/