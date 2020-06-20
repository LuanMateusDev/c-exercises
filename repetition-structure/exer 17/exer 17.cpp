#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    int  num = 1;
    float quadrado;
    
     while(num % 6 != 0){
        cout << "Digite o número: ";
        cin >> num;

        quadrado = pow(num,2);
        cout << "\nO quadrado de " << num <<" é = " << quadrado << "\n";

        cout << "\n__\n";
    }

    return 0;
}

/*

17) Entrar com números e imprimir o quadrado de cada número até entrar um número múltiplo de 6
que deverá ter seu quadrado também impresso.
*/