#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int idade = 1, tot = 0, cont = 0;
    float media = 0;

    while(idade != 0){

        cout << "Informe a sua idade: ";
        cin >> idade;

        if(idade != 0){
            tot += idade;
            cont += 1;
            media = (tot / cont);  
        }
    
    }

    cout << "---------------------\n";
    cout << "    IDADE MÉDIA      \n";
    cout << "---------------------\n";
    cout << "Média entre as idades: " << media << " anos" << endl;

    return 0;
}

/*
40) Fazer um algoritmo que leia um número indeterminado de linhas contendo cada uma a idade de
um indivíduo. A última linha, que não entrará nos cálculos, contém o valor da idade igual a zero.
Calcule e escreva a idade média deste grupo de indivíduos.
*/