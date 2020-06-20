#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){

    int num, fatorial = 1;
    string resposta = "S" ;

       
    while(resposta == "S" || resposta == "s"){
        system("clear");
        cout << "\n-------------------------------";
        cout << "\n           FATORIAL            ";
        cout << "\n------------------------------·\n";
        fatorial = 1;
        cout << "Digite um valor: ";
        cin >> num;
        cout << num << "! = ";
        
            while(num >= 1){
                cout << num;
                fatorial *= num;
                num -= 1;

                if( num >= 1){
                    cout << " x ";
                } else {

                    cout << " = ";
                }
            }
            cout << fatorial;
            
    cout << "\n_\n";
    cout << "\nDeseja continuar [S/N]: ";
    cin >> resposta;
    }
    return 0;
}

/*
25) Criar um algoritmo que leia vários números inteiros e apresente o fatorial de cada número. O
algoritmo se encerra quando se digita um número menor do que 1.
*/