#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

    float salario,inss;
    string msg;

    msg = "\nO valor descontado foi de ";


    cout << "Digite o seu salario em R$: ";
    cin >> salario;

    cout << "------------------------------------ \n";

    if(salario <= 600) {
        cout << "ISENTO";

    }else if (salario <= 1200) {
        inss = salario * 0.20;
        cout << msg << inss << "R$\n";

    }else if (salario <= 2000) {
        inss = salario * 0.25;
        cout << msg << inss << "R$\n";

    }else {
        inss = salario * 0.30;
        cout << msg << inss << "R$\n";

    }

    cout << "\n-----------------------------------";

    return 0;
}
