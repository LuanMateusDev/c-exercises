#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int main(){

    string nome1, nome2, msg1, msg2;

    int num1, num2;

    cout << "Digite o nome do primeiro candidato : ";
    getline(cin, nome1);

    cout << "Digite o número de votos do primeiro candidato: ";
    cin >> num1;

    cin.ignore();

    cout << "Digite o nome do segundo candidato: ";
    getline(cin, nome2);

    cout << "Digite o número de votos do segundo candidato: ";
    cin >> num2;

    msg1 = " O candidato: ";
    msg2 = " é o VENCEDOR!";

    if (num1 > num2){

        cout << msg1 << nome1 << msg2;

    }else if(num2 > num1) {

        cout << msg1 << nome2 << msg2;

    } else {

        cout << "Houve empate e deverá haver um segundo turno!";

}
        return 0;

}


