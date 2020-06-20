#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1,num2,soma;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    soma = num1 + num2;

    if (soma > 10) {

        cout << soma;
    } else if (soma <= 10) {

        cout << "Não exibimos na tela";
    }


    return 0;

}
