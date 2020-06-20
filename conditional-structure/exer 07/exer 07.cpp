//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num1;

    cout << "Digite um número: ";
    cin >> num1;

    if (num1 % 7 == 0) {

        cout << "Ele é Divisivel por 7";
    } else {

        cout << "Não pode ser exibido.";
    }

    return 0;

}



