#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main(){

    float x, f,q;
    
    cout << "Digite o valor de X: ";
    cin >> x;

    f = (5 * x  + 3) / sqrt(pow(x,2)- 16);

    cout << "Valor de f(" << setprecision(3) << x << ") será: " << f;

    cout << endl;


    return 0;
}

/*

*/