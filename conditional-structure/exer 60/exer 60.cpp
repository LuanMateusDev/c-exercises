#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main(){

    string municipio, nome1,nome2;
    int candvoto1, candvoto2, quantieleitores; 

    cout << "Digite o nome do municipio: ";
    cin >> municipio;
    cout << "Digite a quantidade de eleitores: ";
    cin >> quantieleitores;
    cout << "Digite o nome do primeiro candidato: ";
    cin >> nome1;
    cout << "Digite a quantidade de votos do canditado 1: ";
    cin >> candvoto1; 
    cout << "Digite o nome do segundo candidato: ";
    cin >> nome2;
    cout << "Digite a quantidade de votos do segundo canditado 2: ";
    cin >> candvoto2;

        if (candvoto1 > candvoto2){

        cout << "\nCanditado " << nome1 << " venceu em primeiro turno com " << candvoto1 << " votos.";
        } else if (candvoto2 > candvoto1){

        cout << "\nCanditado " << nome2 << " venceu em primeiro turno com " << candvoto2 << " votos.";
        } else {
            if (quantieleitores >= 20000){
                if (candvoto2 == candvoto1){

                    cout << "\nAmbos candidatos " << nome1 << "e" << nome2 << " irão disputar no segundo turno!";
                } 
            }
        } 


    return 0;
}
    


/*
60) Sabendo que somente os municípios que possuem mais de 20.000 eleitores aptos
tem segundo turno nas eleições para prefeito caso o primeiro colocado não tenha
mais de que 50% dos votos, fazer um algoritmo que leia o nome do município, a
quantidade de eleitores aptos, o número de votos do candidato mais votado e
informar se ele terá ou não segundo turno em sua eleição municipal.
*/