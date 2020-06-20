#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    int num;

    cout << "Digite um valor: ";
    cin >> num;

    cout << "Número: " << num << endl;
    cout << "Quadrado: " << pow(num,2) << endl;
    cout << "Raiz quadrada: " << setprecision(4) << sqrt(num) << endl;

    return 0;
}

/*
17) Em com um número e apresentar a seguinte saída:
 Número:
 Quadrado:
 Raiz quadrada:
*/