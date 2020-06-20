#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1;

    cout << "Digite um número: ";
    cin >> num1;

    num1 = num1 % 3;

    if (num1 == 0) {

        cout << "Ele é multiplo de 3";
    } else {

        cout << "Não pode ser exibido";
    }

    return 0;

}

