#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int idade, num, tot50 = 0, tot21 = 0;

    cout << "Com quantas pessoas você quer entrar: ";
    cin >> num;

    for(int c = 1; c <= num; c++){

        cout << "Diga a " << c << " idade: ";
        cin >> idade;

        if(idade < 21){
            tot21 += 1; 
        }
        if(idade > 50){
            tot50 += 1;
        }
    }
    cout << "\n_\n";
    cout << "-----------------------\n";
    cout << "      TOTAL IDADE      \n";
    cout << "-----------------------\n";
    cout << "Total de pessoas com menos de 21 anos: " << tot21 << endl;
    cout << "Total de pessoas com mais de 50 anos: " << tot50;
    cout << "\n_\n";

    return 0;
}

/*
29) Entrar com a idade de várias pessoas e imprimir:
 Total de pessoas com menos de 21 anos;
 Total de pessoas com mais de 50 anos.
*/