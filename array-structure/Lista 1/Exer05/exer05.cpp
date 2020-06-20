#include <iostream>

using namespace std;

int main(){

    int c, S[20], A;

    for(c = 0; c < 20; c++){
        cout << "Digite o " << c << " valor do vetor: ";
        cin >> S[c];
    }

    cout << "Informe o valor da variável A: ";
    cin >> A;

    for(c = 0; c < 20; c++){
        cout << "=> "<< S[c] << " x " << A << " = " << S[c] * A << "\n";
    }



    return 0;
}

/*
5. Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o produto da variável A pelo vetor.
*/