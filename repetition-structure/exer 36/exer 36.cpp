#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int id, idG, idM;
    double peso, menor, maior;

    maior = 0;
    menor = 10000;
    
    for (int i = 1; i < 3 ; i++){

        cout << "\nDigite o id " << i << " º boi: ";
        cin >> id;
        cout << "Digite o peso " << i <<  "º boi: ";
        cin >> peso;

        if (peso < menor){
            menor = peso;
            idM = id;
        } else if (peso > maior){
            maior = peso;
            idG = id;
        }

    }

    cout << "\nO número de id do boi gordo é: " << idG;
    cout << "\npesando: " << maior << "kg";
    cout << "\nO número de id do boi magro é: " << idM;
    cout << "\npesando: " << menor << "kg";

    return 0;
}