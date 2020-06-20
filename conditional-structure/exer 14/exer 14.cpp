#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num;

    cout << "Digite um valor: ";
    cin >> num;

    if (num > 20){
        cout << "Valor é maior que 20.";
    } else if (num == 20){
        cout << "Valor é igual a 20.";
    } else {
        cout << "Valor é menor que 20";
    }

    cout << endl;
    return 0;

}
/*
14) Entrar com um número e imprimir uma das mensagens: maior do que 20, igual a 20
ou menor do que 20.
*/