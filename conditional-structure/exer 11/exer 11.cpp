#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1, num2, soma;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    soma = num1 + num2;

    if(soma >= 10){
        soma += 5;
    } else {
        soma -= 7;
    }

    cout << "A soma será: " << soma << " " << endl;



    return 0;
}

/*
11) Ler dois valores numéricos, efetuar a adição. Caso o valor somado seja maior ou
igual a 10, este deverá ser apresentado somando-se a ele mais 5, caso o valor
somado não seja maior ou igual a 10, este deverá ser apresentado subtraindo-se 7.
*/
