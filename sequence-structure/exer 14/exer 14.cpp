#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3, num4;

    cout << "Digite o primeiro valor: ";
    cin >> num1;
    cout << "Digite o segundo valor: ";
    cin >> num2;
    cout << "Digite o terceiro valor: ";
    cin >> num3;
    cout << "Digite o quarto valor: ";
    cin >> num4;

    cout << "Média Ponderada: " << (num1 * 1 + num2 * 2 + num3 * 3 + num4 * 4) / 10;
    cout << endl;

    return 0;

}

/*
4) Entrar com quatro números e imprimir a média ponderada, sabendo-se que os pesos
são respectivamente: 1, 2, 3 e 4.
*/