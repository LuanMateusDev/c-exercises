// Leia um número e informa se ele é impar ou par.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1;

    cout << "Digite um número: ";
    cin >> num1;

    num1 = num1 % 5;

    if (num1 == 0) {

        cout << "Ele é Multiplo de 5";
    } else {

        cout << "Não pode ser exibido";
    }

    return 0;

}



