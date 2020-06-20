#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int u, c, d, auxd, num, inv;

    cout << "Inversor de números\n";
    cout << "Insira um conjunto de 3 algarismo: \n";
    cin >> num;

    c = num/100;
    auxd = num - (c * 100);
    d = auxd / 10;
    u = num - (c*100)-(d*10);
    inv = (u * 100) + (d*10) + (c);
    cout << inv;

    return 0;
}


/*
19) Entrar com um número no formato CDU e apresentar invertido: UDC. (Exemplo: 123,
sairá 321). O número deverá ser armazenado em outra variável antes de ser
apresentado.
*/