#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float real;

    cout << "Digite um número real: ";
    cin >> real;

    cout << "um terço do número real: " << setprecision(3) << real / 3;

    cout << endl;



    return 0;
}

/*
11) Leia um número real e imprimir a terça parte deste número.
*/