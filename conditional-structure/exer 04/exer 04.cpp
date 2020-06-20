#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float num1;

    cout << "Digite um número: ";
    cin >> num1;

    if (num1 > 20) {

        cout << num1 / 2;
    } else {

        cout << "Não pode ser exibido";
    }

    return 0;

}
