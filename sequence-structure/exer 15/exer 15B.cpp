#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

const float PI = 3.14; 


int main(){
    float angulo, sen, coss, tg, sc, cs, ct;

    cout << "Digite o angulo em graus: ";
    cin >> angulo;

    sen = sin(angulo * PI / 180);
    cout << "O seno de " << setprecision(4) << angulo << " = " << sen;
    cout << endl;

    coss = cos(angulo * PI / 180);
    cout << "O cosseno de " << setprecision(4) << angulo << " = " << coss;
    cout << endl;

    tg = tan(angulo * PI / 180);
    cout << "A tangente de " << setprecision(4) << angulo << " = " << tg;
    cout << endl;
    
    sc = 1/cos(angulo * PI / 180);
    cout << "A secante de " << setprecision(4) << angulo <<  " = " << sc;
    cout << endl;

    cs = 1/sin(angulo * PI / 180);
    cout << "A cossecante de " << setprecision(4) << angulo << " = " << cs;
    cout << endl;

    ct = 1/tan(angulo * PI / 180);
    cout << "A cotangente de " << setprecision(4) << angulo << " = " << ct;
    cout << endl;

    return 0;
}


/*
15) Entrar com um ângulo em graus e apresentar: seno, co-seno, tangente, secante, co-
secante e co-tangente deste ângulo.
*/