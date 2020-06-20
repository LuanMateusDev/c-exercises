#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float num1, num2;
    int code;

    cout << "Digite o primeiro valor: ";
    cin >> num1;
    cout << "Digite o segundo valor: ";
    cin >> num2;

    cout << "=======================\n";
    cout << "   TABELA DE ESCOLHA    \n";
    cout << "=======================\n";
    cout << "[1] Somar.\n";
    cout << "[2] Subtrair.\n";
    cout << "[3] Multiplicar.\n";
    cout << "[4] Dividir.\n";
    cout << "=======================\n";
    cout << "Code: ";
    cin >> code;
    cout << "=======================\n";

    switch(code){

        case 1:
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case 2:
            cout  << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case 3: 
            cout << num1 << " x " << num2 << " = " << num1 * num2;
            break;
        case 4: 
            cout << num1 << " / " << num2 << " = " << num1 / num2;
    }
    cout << endl;

    return 0;
}

/*
26) Faça um algoritmo que receba dois números e ofereça um menu de opções de qual
operação fazer com estes números (soma, subtração, multiplicação e divisão).
Escolhida a opção, o algoritmo apresenta o resultado da operação escolhida.
*/
