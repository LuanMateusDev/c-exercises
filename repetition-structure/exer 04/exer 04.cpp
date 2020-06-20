#include <iostream>
#include <stdlib.h>
// 4
using namespace std;

int main(){

    int num, c, soma;

    cout << "Digite um número que voce queira multiplicar: ";
    cin >> num;

    soma = 0;

    for (c = 1 ; c <= 10; c++){

        soma = num * c;
        cout << num << " * " << c << " = " << soma << "\n";

    }


    return 0;
}





