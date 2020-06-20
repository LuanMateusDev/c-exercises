#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float num1, num2, soma, menos, vezes, dividir;
    string operador, final = "S";


    while(final != "N"){

        cout << "\nEscolha a operação:";
        cout << "\n[1] Somar";
        cout << "\n[2] Subtrair";
        cout << "\n[3] Multiplicar";
        cout << "\n[4] Dividir";
        cout << "\nDigite o número escolhido: ";
        cin >> operador;

        cout << "Digite o primeiro número: ";
        cin >> num1;
        cout << "Digite o segundo número: ";
        cin >> num2;

        if(operador == "1"){
            soma = num1 + num2;
            cout << "\n " << num1 << " + " << num2 << " = " << soma;
        }
        if (operador == "2"){
            menos = num1 - num2;
            cout << "\n " << num1 << " - " << num2 << " = " << menos;
        }
        if (operador == "3"){
            vezes = num1 * num2;
            cout << "\n " << num1 << " * " << num2 << " = " << vezes;
        }
        if (operador == "4"){
            dividir = num1 / num2;
            cout << "\n " << num1 << " / " << num2 << " = " << dividir;
        }   
        cout << "\nDeseja continuar: [S/N]";
        cin >> final;
    }
    cout << "\n_\n";
        
    return 0;
}

/*
19) Faça um algoritmo que seja uma calculadora.
*/