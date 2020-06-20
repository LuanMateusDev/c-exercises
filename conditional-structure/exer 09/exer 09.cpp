//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1, centena;

    cout << "Digite um número: ";
    cin >> num1;

    centena = num1 / 100;


    if (centena % 2 == 0) {

        cout << "Ele é Par";
    } else {

        cout << "Ele é Impar";
    }

    return 0;

}



