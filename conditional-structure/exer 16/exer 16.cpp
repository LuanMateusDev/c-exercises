//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int salario,presta;

    cout << "Digite o salario bruto: ";
    cin >> salario;
    cout << "Digite o valor da prestaçao:  ";
    cin >> presta;

   // valorM = (salario * 30) / 100;

    cout << "---------------------------\n";
    cout << "           Status          \n";
    cout << "---------------------------\n";

    if (presta > salario * 0.3) {

        cout << "Emprestimo Recusado!\n\n\n";
    } else {

        cout << "Emprestimo Permitido!\n\n\n";
    }

    return 0;

}





