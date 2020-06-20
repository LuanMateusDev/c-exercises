#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int x,y,z;

    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y: ";
    cin >> y;
    cout << "Digite o valor de Z: ";
    cin >> z;

    if ((x + y > z) && (y + z > x) && (x + z > y)) {

        cout << "----------------------------- \n";
        cout << "         Resultado            \n";
        cout << "----------------------------- \n";
        cout << "É um triangulo: ";

        if ((x == y) && (x == z)){
        cout << "Equilatero";

        } else if (( x != y) && ( x != z ) && (y != z)) {
        cout << "Isosceles";

        } else {
        cout << "Escaleno";
        }

    } else {
        cout << "\n [ERROR] Não é um triangulo!! \n";
    }

    return 0;
}
