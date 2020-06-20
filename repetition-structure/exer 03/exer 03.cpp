#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num, c, soma;

    cout << "Digite um número: ";
    cin >> num;

    soma = 0;

    for (c = 1 ; c <= num; c++){

        soma = soma + c;
        cout << soma << " + " << c << " = " << soma << "\n";
    }

      cout << "\nTotal acumalado: " << soma;

    return 0;
}




