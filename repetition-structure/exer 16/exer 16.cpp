#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string sexo;
    int totM;
    
    totM = 0;
    for(int i = 1; i <= 10; i++){

        cout << "Digite o seu sexo: [M/F]";
        cin >> sexo;

        if ((sexo == "M") || (sexo == "m")){
            
            totM = totM + 1;
        }

    }

    cout << "A quantidade de homens e: " << totM;

    return 0;
}

/*
16) Entrar com sexo de várias pessoas e imprimir quantas pessoas são do sexo masculino.
*/