#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    int num, num2;
    float div;

    cout << "Digite um valor: ";
    cin >> num;
    cout << "Digite o segundo valor: ";
    cin >> num2;

    div = num / num2;

    cout << "Dividendo: " << num << "\n";
    cout << "Divisor: " << num2 << "\n";
    cout << "Quociente: " << setprecision(4) << div << "\n";
    cout << "Resto: " << num % num2;

    cout << endl;


    return 0;
}

/*
13) Entrar com dois números inteiros e imprimir a seguinte saída:
 Dividendo:
 Divisor:
 Quociente:
 Resto:
*/