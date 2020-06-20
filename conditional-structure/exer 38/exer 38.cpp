#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string code;
    int num1,num2;

    cout << "Digite o primeiro valor: ";
    cin >> num1;
    cout << "Digite o segundo valor: ";
    cin >> num2;
    
    cout << "=====================\n";
    cout << "  TABELA DE CODIGOS  \n";
    cout << "=====================\n";
    cout << "\n[+] Soma.";
    cout << "\n[-] Subtração.";
    cout << "\n[*] Multiplicação.";
    cout << "\n[/] Divisão.";
    cout << "\n============================================\n";
    cout << "Digite o código: ";
    cin >> code;

    if(code == "+"){
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    } else if (code == "-"){
       cout << num1 << " - " << num2 << " = " << num1 - num2;
    } else if ( code == "*"){
        cout << num1 << " x " << num2 << " = " << num1 * num2;
    } else if (code == "/"){
        cout << num1 << " / " << num2 << " = " << num1 / num2;
    } else {
        cout << "Código Invalido!!";
    }

    cout << endl;

    return 0;
}

/*
38) Elabore um algoritmo que leia o valor de dois números inteiros e a operação
aritmética desejada; calcule, então, a resposta adequada. Utilize os símbolos da
tabela a seguir para ler qual a operação aritmética escolhida.
*/