//Lendo três valores e mostrando o menor deles.
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1,num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 == num2) {

        cout << "O Valores sao iguais";
    } else if (num1 != num2){

        cout << "Os valores sao diferentes";
    }

    return 0;

}

