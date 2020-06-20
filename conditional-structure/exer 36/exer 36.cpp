// Classifique por idade certas categorias.

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

    int idade;
    string msg = "Ele pertence a categoria: ";

    cout << "Digite a idade: ";
    cin >> idade;



     if (idade <= 4){

        cout << "Idade Insuficiente";
    }else if ((idade >=5) && (idade <=7)){

       cout << msg << "Infantil A";

    } else if ((idade >= 8) && (idade <= 10)){

        cout << msg << "Infantil B";

    } else if ((idade >= 11) && (idade <= 13)){

        cout << msg << "Juvenil A";

    } else if ((idade >= 14) && (idade <= 17)){

        cout << msg << "Juvenil B";

    } else {

        cout << msg << "Adulto";
    }

    return 0;
}
