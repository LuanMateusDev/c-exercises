#include <iostream>

using namespace std;

void porextenso(int num){
    switch(num){
        case 1:
        case 2:
            cout << "Dois";
            break;
        case 3:
            cout << "Três";
            break;
        default: 
            cout << "Outros";
            break;
    }
}

int main(){

    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    porextenso(numero);
}