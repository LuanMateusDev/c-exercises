#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    int num;

    for(int i = 1 ; i <= 5 ; i++){
        cout << "\nColoque o " << i << "º número: ";
        cin >> num;
        cout << "O número " << num << " ao quadrado ficará com o valor de: " << pow(num,2);
        cout << "\n_\n";
    }
    return 0;
}
/*
21) Criar um algoritmo que entre com cinco números e imprimir o quadrado de cada número.
*/