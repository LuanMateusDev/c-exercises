#include <iostream>
#include <math.h>

using namespace std;

const float PI = 3.14; 

float angulo, sen, coss, tg, sc, cs, ct;

void Seno(){
    cout << "Digite o angulo em graus: ";
    cin >> angulo;
    sen = sin(angulo * PI / 180);
    cout << "O seno de " << angulo << " = " << sen;
}

void Cosseno(){
    cout << "Digite o angulo em graus: ";
    cin >> angulo;
    coss = cos(angulo * PI / 180);
    cout << "O cosseno de" << angulo << " = " << coss;
}

void Tangente(){
    cout << "Digite o angulo em graus: ";
    cin >> angulo;
    tg = tan(angulo * PI / 180);
    cout << "A tangente de " << angulo << " = " << tg;
}

void Secante(){
    cout << "Digite o angulo em graus: ";
    cin >> angulo;
    sc = 1/cos(angulo * PI / 180);
    cout << "A secante de " << angulo <<  " = " << sc;
}

void Cossecante(){
    cout << "Digite o angulo em graus: ";
    cin >> angulo;
    cs = 1/sin(angulo * PI / 180);
    cout << "A cossecante de" << angulo << " = " << cs;
}

void Cotangente(){
    cout << "Digite o angulo em graus: ";
    cin >> angulo;
    ct = 1/tan(angulo * PI / 180);
    cout << "A cotangente de " << angulo << " = " << ct;
}



/*
15) Entrar com um ângulo em graus e apresentar: seno, co-seno, tangente, secante, co-
secante e co-tangente deste ângulo.
*/