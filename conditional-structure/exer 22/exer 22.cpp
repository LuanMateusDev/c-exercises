#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int num1,num2,num3,num4,num5, maior,menor;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digte o segundo número: ";
    cin >> num2;
    cout << "Digte o terceiro número: ";
    cin >> num3;
    cout << "Digte o quarto número: ";
    cin >> num4;
    cout << "Digte o quinto número: ";
    cin >> num5;
    maior = num1;
    menor = num1;

    if(num2 < menor){
        menor = num2;
    }
    if(num2 > maior){
        maior = num2;
    }
    if(num3 < menor){
        menor = num3;
    }
    if(num3 > maior){
        maior = num3;
    }
    if(num4 < menor){
        menor = num4;
    }
    if(num4 > maior){
        maior = num4;
    }
    if(num5 < menor){
        menor = num5;
    }
    if(num5 > maior){
        maior = num5;
    }

    cout << "===============\n";
    cout << "   Resultado    \n";
    cout << "===============\n";
    cout << "O maior número será: " << maior << endl;
    cout << "O menor número será: " << menor << endl;

    return 0;
}

/*
22) Ler cinco números e identificar qual o maior e qual o menor.
*/