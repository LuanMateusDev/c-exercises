#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){

    int codigo;
    float valorEtiqueta, valorFinal, valorMes;

    cout << "Digite o preço do produto:";
    cin >> valorEtiqueta;
    cout << "[1] À vista em dinheiro ou cheque, recebe 10% de desconto \n";
    cout << "[2] À vista no cartão de crédito, recebe 5% de desconto \n";
    cout << "[3] Em 2 vezes, preço normal de etiqueta sem juros \n";
    cout << "[4] Em 3 vezes, preço normal de etiqueta mais juros de 10% \n";
    cout << "Digite a forma de pagamento [1,2,3,4]: ";
    cin >> codigo;

    switch(codigo) {

    case 1:
        cout << "À vista em dinheiro ou cheque, recebe 10% de desconto\n";
        valorFinal = valorEtiqueta * 0.9;
        cout << "Valor a pagar: " << valorFinal << "R$\n";
        break;

    case 2:
        cout << "À vista no cartão de crédito, recebe 5% de desconto\n";
        valorFinal = valorEtiqueta * 0.95;
        cout << "Valor a pagar: " << valorFinal << "R$\n";
        break;

    case 3:
        cout << "Em 2 vezes, preço normal de etiqueta sem juros\n";
        valorFinal = valorEtiqueta / 2;
        cout << "Valor a pagar por mes em 2x e: " << valorFinal << "R$\n";
        break;

    case 4:
        cout << "Em 3 vezes, preço normal de etiqueta mais juros de 10%\n";
        valorFinal = valorEtiqueta * 1.10;
        valorMes = (valorEtiqueta * 1.10) / 3;
        cout.precision(2);
        cout << fixed << "Valor a pagar por mes em 3x: " << valorMes << "R$\nValor Final: "<< valorFinal;
        break;

    default : cout << "Codigo Inválido!!!!";

    }

    return 0;
}
