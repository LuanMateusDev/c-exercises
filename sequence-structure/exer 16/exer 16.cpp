#include <iostream>
#include <math.h>

using namespace std;

    double logbase(double a, double base){
        return  log(a) / log(base);

    }

int main(){

    double x = 65536;
    double result;

    result = logbase(x, 2);
    cout << "Log base 2 de " << x <<  " = " << result;
    cout << endl;

}

/*
16) Entrar com o número e a base em que se deseja calcular o logarítmo desse número e
apresenta-lo.
*/