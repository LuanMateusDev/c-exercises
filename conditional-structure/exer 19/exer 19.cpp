#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;


int main(){

    int s1,s2,s3,qx,qy;

    cout << "Digite o primeiro comprimento: ";
    cin >> s1;
    cout << "Digite o segundo comprimento: ";
    cin >> s2;
    cout << "Digite o terceiro comprimento: ";
    cin >> s3;

    qx = pow(s1,2.0);
    qy = pow(s2,2.0) + pow(s3,2.0);


    cout << "------------------------------\n";
    cout << "          RESULTADO           \n";
    cout << "------------------------------\n";

    if (qx == qy) {

        cout << "Triângulo Retângulo é formado.";
    } else if (qx > qy) {

        cout << "Triângulo Obtusângulo é formado.";

    }else if (qx < qy) {

        cout << "Triângulo Acutângulo é formado.";
    } else {

        cout << "Nenhum Triângulo é formado.";
    }

    return 0;
}
