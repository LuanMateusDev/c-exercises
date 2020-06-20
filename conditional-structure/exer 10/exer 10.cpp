//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int anoAtual, anoNascimento, idade;

    cout << "Digite o ano que voce nasceu: ";
    cin >> anoNascimento;

    anoAtual = 2020;

    idade =  anoAtual - anoNascimento;


    if ((anoNascimento <= 0) || (anoNascimento > 2020)) {

        cout << "Invalido";
    } else {

        cout << idade;
    }

    return 0;

}



