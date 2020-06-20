#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int num;
    float raiz;

    for(int i = 1; i <= 15; i++){

        cout << "\nDigite um numero: ";
        cin >> num;
        raiz = sqrt(num);
        cout << "A raiz quadrada de " << num << " sera: " << raiz;
    }

}

/*
13) Entrar com 15 números e imprimir a raiz quadrada de cada número.
*/