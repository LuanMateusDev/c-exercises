#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num;

    cout << "Digite um valor: ";
    cin >> num;

    if(num >= 20 && num <= 90){
        cout << "O valor está entre 20 e 90.";
    } else {
        cout << "O valor não está entre 20 e 90.";
    }

    cout << endl;

    return 0;
}

/*
15) Construir um algoritmo que indique se o número digitado está compreendido entre
20 e 90 ou não.
*/