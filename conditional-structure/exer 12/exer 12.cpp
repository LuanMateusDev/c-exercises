#include <iostream>
#include <stdlib.h> 

using namespace std;

int main(){

    int num1,num2,soma, ini;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    soma = num1 + num2;

    if (soma > 20){
        soma += 8;
    } else {
        soma -= 5;
    }

    cout << "A soma será : " << soma << " " << endl;

    return 0;

}

/*
12) Construir um algoritmo que leia dois números e efetue a adição. Caso o valor somado
seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso o
valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se
5.
*/