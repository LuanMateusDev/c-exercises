#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int code;

    cout << "=====================\n";
    cout << "  TABELA DE CODIGOS  \n";
    cout << "=====================\n";
    cout << "\n[1] Alimento não-perecível.";
    cout << "\n[2, 3 ou 4] Alimento perecível.";
    cout << "\n[5 ou 6] Vestuário.";
    cout << "\n[7] Higiene pessoal.";
    cout << "\n[8 até 15] Limpeza e utensílios domésticos.";
    cout << "\n============================================\n";
    cout << "Digite o código: ";
    cin >> code;

    switch(code){

        case 1: 
            cout << "Alimento não-perecível.";
            break;
        case 2: case 3: case 4:
            cout << "Alimento perecível.";
            break;
        case 5: case 6:
            cout << "Vestuário.";
            break;
        case 7:
            cout << "Higiene pessoal.";
            break;
        case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15:
            cout << "Limpeza e utensílios domésticos.";
            break;
        default:
            cout << "Código Invalido!!";
    }

    cout << endl;


    return 0;
}

/*
35)Escreva um algoritmo que leia o código de um determinado produto e mostre a sua
classificação. Utilize a seguinte tabela como referência:
Código
1               
2, 3 ou 4
5 ou 6
7
8 até 15

       
*/