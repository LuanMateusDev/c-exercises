//Lendo três valores e mostrando o menor deles.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1,num2,num3;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;

    if ((num1 < num2) && (num1 < num3)) {

        cout << "O menor valor é: "<< num1;

    } else if ((num2 < num1) && (num2 < num3)) {

        cout << num2;

    } else {

        cout << num3;
    }

    return 0;

}

