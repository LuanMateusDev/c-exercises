#include <iostream>

using namespace std;

int main(){

    int c,valor[6], dobro[6];

    cout << "<-- Coletor de Valores -->\n";
    for(c = 0; c < 6; c++){
        cout << "Digite o " << c << " valor: ";
        cin >> valor[c];
        dobro[c] = valor[c] * 2;
    }

    cout << "==============================\n";
    cout << "   <-- Valores Dobrados -->\n";
    cout << "==============================";
    for(c = 0; c < 6; c++){
        cout << "\nO indice " << c << " possui o valor dobrado: " << dobro[c];
    }
    cout << "\n";



    return 0;
}