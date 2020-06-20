#include <iostream>

using namespace std;

int main(){
    
    float saldo, reajuste;

    cout << "Saldo total: ";
    cin >> saldo;

    reajuste = (1 * saldo) / 100;

    cout << "Novo saldo com o reajuste: " << saldo + reajuste;

    cout << endl; 
    
    return 0;    
}

/*
    18) Informe o saldo de uma aplicação e apresente o novo saldo, considerando o reajuste
de 1%.
*/