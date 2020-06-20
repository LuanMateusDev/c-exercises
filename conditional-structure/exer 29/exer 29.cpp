#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1, num2, num3, maior =0,menor=0;

    cout << "Digite o primeira valor: ";
    cin >> num1;
    cout << "Digite o segundo valor: ";
    cin >> num2;
    cout << "Digite o terceiro valor: ";
    cin >> num3;
    maior = num1;
    menor = num1;
    

    if(num2 > maior){
        maior = num2;
    }else if(num2 < menor){
        menor = num2;
    }
    if(num3 > maior){
        maior = num3;
    } else if (num3 < menor){
        menor = num3;
    }
    

    cout << "O maior número será: " << maior;
    cout << endl;

    return 0;
}

/*
29) Faça um algoritmo que receba 3 números e diga qual o maior dos 3. (Não esqueça
que podem ser iguais em dois ou mesmo os três números).
*/