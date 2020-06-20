#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1;

    cout << "Digite um número: ";
    cin >> num1;

    num1 = num1 % 2;

    if (num1 == 0) {

        cout << "Ele é Par";
    } else {

        cout << "Ele é impar";
    }

    return 0;

}


