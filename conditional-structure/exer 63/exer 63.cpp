#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){

    float x, f,q;
    
    cout << "Digite o valor de X: ";
    cin >> x;

    if(x <= 1){
        cout << "Valor de f("<< x << "): 1"; 
    } else if (x > 1 && x <= 2){
        cout << "Valor de f("<< x << "): 2"; 
    } else if (x > 2 && x <= 3){
        cout << "Valor de f("<< x << "): " << pow(x,2); 
    } else {
        cout << "Valor de f("<< x << "): " << pow(x,3);
    }

    cout << endl;

    return 0;
}

/*

*/